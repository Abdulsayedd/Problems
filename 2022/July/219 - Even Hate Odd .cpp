//https://codeforces.com/group/xkS6MyTkfj/contest/262216/problem/E
#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define ld long double
int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int arr[n];
        int e,o;e=o=0;
        for(int i = 0 ; i < n ; i++)
        {
            cin>>arr[i];
            arr[i]&1?o++:e++;
        }
        if(n&1)cout<<-1<<"\n";
        else cout<<abs(o-e)/2<<"\n";
    }
}