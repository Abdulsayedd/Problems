//Juniors Summer Camp ACM assiut - Juniors Day 5 Contest
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
long long const MOD=1000000007;
int main () {
    pre;
    long long a,b,c,d,n;
    cin>>a>>b>>c>>d>>n;
    cout<<(((a%n)*(b%n))%n+((c%n)*(d%n))%n)%n;
}