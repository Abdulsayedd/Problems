#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
long long const MOD=1000000007;
int main () {
    pre;

    int n,m;cin>>n>>m;
    bool f = false;
    int so=0,se=0;
    for(int i = 1 ; i< 100000 ; i++)
    {
        if(i&1)so++;
        else se++;
        if(so==n && se==m || so==m && se==n){f=true;break;}
    }
    cout<<(f?"YES":"NO")<<"\n";
}