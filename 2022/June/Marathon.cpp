#include <bits/stdc++.h>
#define testcase int t;cin>>t;while(t--)
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    //freopen ("sss.in","r", stdin);
    pre;
    testcase {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int n=0;
        if(a<b)n++;
        if(a<c)n++;
        if(a<d)n++;
        cout<<n<<"\n";
    }
}