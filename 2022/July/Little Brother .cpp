#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
        int a,c;
        char b;
        cin>>a>>b>>c;
        b=='-'?cout<<a-c:cout<<a+c;
        cout<<"\n";
    }
}