//https://codeforces.com/group/XGW5NIn8kq/contest/327273/problem/B
#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
int main ()
{
    int arr[]={6,2,5,5,4,5,6,3,7,6};
int t;cin>>t;
while(t--)
{
    ll sum=0;
    string x;cin>>x;
    for(char i : x)sum+=arr[i-'0'];
    cout<<sum<<"\n";
}
}