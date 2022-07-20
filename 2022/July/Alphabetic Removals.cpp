// https://codeforces.com/problemset/problem/999/C
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int n,m;cin>>n>>m;
    string x;cin>>x;
    string y="";
    for(int i =0;i<x.size();i++)y+='1';
    char ch='a';
    int l=26;
    while(l-- && m)
    {
        for(int i = 0 ; i <x.size() ; i++)
        {
            if(x[i]==ch){y[i]='0';m--;}
            if(m==0)break;
        }
        ch++;
    }
    for(int i = 0 ; i<y.size() ;i++)
    {
        if(y[i]=='1')cout<<x[i];
    }
}