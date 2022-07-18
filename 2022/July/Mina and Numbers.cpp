#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    long long x,y,z,a,b,c;
    cin>>x>>y>>z;
    c=(y-(x-z))/2;
    b=z-c;
    a=x-b;
    cout<<a<<" "<<b<<" "<<c;
}