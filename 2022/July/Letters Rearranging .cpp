//https://codeforces.com/group/UZxBcPr4qR/contest/248772/problem/D
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int t,c;cin>>t;
    string x;
    while(t--)
    {
        c=1;
        cin>>x;
        for(int i = 0 ; i <x.size() ; i++)
        {
            if(x[i+1]==x[i] && i<x.size()-1)c++;
        }
        if(c==x.size())cout<<-1<<"\n";
        else
        {
            sort(x.begin(),x.end());cout<<x<<"\n";
        }
    }
}