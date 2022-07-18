#include <bits/stdc++.h>
#define testcase int t;cin>>t;while(t--)
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
unsigned long long sum=0;
int main ()
{
    //freopen ("sss.in","r", stdin);
    pre;
    int n,m,c=0;cin>>n>>m;
    while(true)
    {
        sum+=n;c++;
        if(sum%10==m || sum%10==0 && sum!=0){cout<<c;break;}
    }
}