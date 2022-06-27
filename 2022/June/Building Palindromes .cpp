#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
bool fun(string x)
{
    int count[400] = { 0 };
    for (int i = 0; x[i]; i++)
        count[x[i]]++;
    int odd = 0;
    for (int i = 0; i < 400; i++) {
        if (count[i]%2!=0)
            odd++;
        if (odd > 1)
            return false;
    }
    return true;
}
int main ()
{
    pre;
    int t;cin>>t;
    for(int i1=0;i1<t ;i1++)
    {
        cout<<"Case #"<<i1+1<<": ";
        int n,m,sum=0,mn;cin>>n>>m;
        string x;cin>>x;
        for(int i = 0 ; i < m ; i++)
        {
            int l,r;cin>>l>>r;
            string y = x.substr(l-1,r-l+1);
            fun(y)?sum++:mn=0;
        }
        cout<<sum<<"\n";
    }
}