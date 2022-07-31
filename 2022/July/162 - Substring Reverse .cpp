// https://codeforces.com/group/UZxBcPr4qR/contest/249261/problem/A
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    string x,y;cin>>x>>y;
    int fpos=0,epos=0;
    for(int i = 0 ; i < x.size() ; i++)
    {
        if(x[i]!=y[i]){fpos=i;break;}
    }
    for(int i = x.size()-1 ; i>=0 ; i--)
    {
        if(x[i]!=y[i]){epos=i;break;}
    }
    reverse(y.begin()+fpos,y.begin()+epos+1);
    cout<<(x==y?"YES":"NO")<<"\n";
}