#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int main () {
    pre;
    long long n,l;cin>>n>>l;
    vector<double>v;
    for(long long i = 0 ; i < n ; i++)
    {
        long long h ; cin>>h;
        v.push_back(h);
    }
    sort(v.begin(),v.end());
    double ans=v[0]-0;//begin
    for(long long i = 1 ; i < n ; i++)
    {
        ans=max(ans,((v[i]-v[i-1])/2));
    }
    ans=max(ans,(l-v[n-1]));//end
    cout<<fixed<<setprecision(10)<<ans;
}