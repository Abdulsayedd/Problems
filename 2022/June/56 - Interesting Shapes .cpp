#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    const double pi = 3.14159265359;
    double n,r;cin>>n>>r;
    cout<<fixed<<setprecision(6)<<(r*r*pi)-(n*n);
}