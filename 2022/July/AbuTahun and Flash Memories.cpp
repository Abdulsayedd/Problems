#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int main () {
    pre;
    long long n,x,a;
    cin>>n>>x>>a;
    a/=x;
    cout<<ceil(1.*n/a)<<"\n";
}