// https://codeforces.com/problemset/problem/1295/A
#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        if(n&1)
        {
            cout<<7;
            for(int i = 0 ; i < (n>>1)-1; i++)cout<<1;
        }
        else  for(int i = 0 ; i < (n>>1); i++)cout<<1;
        cout<<"\n";
    }
}