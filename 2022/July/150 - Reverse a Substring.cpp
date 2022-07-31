//https://codeforces.com/group/UZxBcPr4qR/contest/248772/problem/B
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int n;cin>>n;
    string x;cin>>x;
    if(is_sorted(x.begin(),x.end()))cout<<"NO"<<"\n";
    else
    {
        string y=x;
        prev_permutation(y.begin(),y.end());
        pair<int,int>p{0,0};
        for(int i = 0 ; i < x.size() ; i++)
        {
            if(x[i]!=y[i] && p.first==0)
            {
                p.first=i+1;
            }
            else if(x[i]!=y[i]&& p.second==0)
            {
                p.second=i+1;
                break;
            }
        }
        cout<<"YES"<<"\n"<<p.first<<" "<<p.second;

    }

}