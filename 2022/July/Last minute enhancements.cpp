// https://codeforces.com/problemset/problem/1466/B
#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int main () {
    pre;
    int t;cin>>t;
    const long long N = 200009;
    while(t--)
    {
        map<long long,int>mp;
        long long n,c=0;cin>>n;
        int arr[n];
        for(int i = 0 ; i < n ; i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
        }
        for(int i = (2*n)+10 ; i >= 0 ; i--)
        {
            if(mp[i+1])continue;
            if(mp[i])
            {
                mp[i+1]++;
                mp[i]--;
            }
        }
        for(auto i : mp)c+=!!i.second;
        cout<<c<<"\n";
    }
}