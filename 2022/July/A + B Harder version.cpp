#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
long long sum=0,h;
int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
        sum=0;
        for(int i = 0 ; i < 7 ; i++)
        {
            cin>>h;
            sum+=h;
        }
        cout<<sum<<"\n";
    }
}