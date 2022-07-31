// https://codeforces.com/group/UZxBcPr4qR/contest/249261/problem/F
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
   int t;cin>>t;
    while(t--)
    {
        string x;cin>>x;
        bool f = true;
        char ch=x[0];
        for(int i = 1 ; i < x.size() ; i++)
        {
            if(ch=='z')ch='a';
            else ch++;
            if(x[i]!=ch){f=false;break;}
        }
        cout<<(f?"YES":"NO")<<"\n";
    }
}