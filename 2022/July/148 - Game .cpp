//https://codeforces.com/group/UZxBcPr4qR/contest/248772/problem/A
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int n,h;cin>>n;
    deque<int>v;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>h;
        v.push_back(h);
    }
    sort(v.begin(),v.end());
    for(int i = 0 ; i < n-1; i++)
    {
        if(!(i&1))v.pop_back();
        else v.pop_front();
    }
    cout<<*v.begin()<<"\n";
}