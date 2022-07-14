#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    long long n,m;cin>>n;m=n;
    int c=0;
    while(m!=0)
    {
        if((m%10)==0){m/=10;continue;}
        if((n%(m%10))==0)c++;
        m/=10;
    }
    cout<<c<<"\n";
}