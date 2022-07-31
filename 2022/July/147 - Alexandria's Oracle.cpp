//https://codeforces.com/group/UZxBcPr4qR/contest/248504/problem/F
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
        string x;cin>>x;
        string y;int pom=0;
        for(int i = 0 ; i < x.size() ; i++)
        {
            if(x[i]!='!')y+=x[i];
            else pom++;
        }
        long long m = stoull(y);
        long long sum=1;
        while(m>0)
        {
            sum*=m;
            m-=pom;
        }
        cout<<sum<<"\n";
    }
}