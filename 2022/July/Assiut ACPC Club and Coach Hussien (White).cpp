#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
long long const MOD=1000000007;
int main () {
    pre;
    int love[7]={5,103,320,7000,9120,1122,51345};
    int n;
    cin >> n;
    long long sum=0,h,mn=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin>>h;
        for(int j = 0 ; j < 7 ; j++)
        {
            mn=min(mn,abs(love[j]-h));
        }
        sum+=mn;
        mn=INT_MAX;
    }
    cout<<sum<<"\n";

}