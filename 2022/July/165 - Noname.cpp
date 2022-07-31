// https://codeforces.com/group/UZxBcPr4qR/contest/249261/problem/H
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    string x;cin>>x;
    int freq[26]={0};
    for(int i=0;i<x.size();i++)
    {
        freq[(x[i]|' ')-'a']++;
        for(auto i1 : freq)cout<<i1<<" ";
        cout<<"\n";
    }
}