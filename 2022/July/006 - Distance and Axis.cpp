#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    int t;cin>>t;
    while(t--)
    {
    int n,m;cin>>n>>m;
    n<m?cout<<m-n<<"\n":cout<<(m+n)%2<<"\n";
}
}


