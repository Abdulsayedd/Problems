#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
long long const MOD=1000000007;
long long fun(int l,int r)
{
    int num=r-l+1;
    if(!(num&1)) return ((l&1)?(num/2):(-num/2));
    else
    {
        int z=r*pow(-1,r);
        return ((l&1)?(num/2+z):(-num/2+z));
    }
}
int main () {
    pre;
    int q;cin>>q;
    while(q--)
    {
        int l,r;cin>>l>>r;
        cout<<fun(l,r)<<"\n";
    }

}