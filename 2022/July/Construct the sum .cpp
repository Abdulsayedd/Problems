//https://codeforces.com/group/xkS6MyTkfj/contest/262216/problem/K
#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define ull unsigned long long
#define ld long double
int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
        ull n, s;cin>>n>>s;
        if(s<=n)cout<<1<<" "<<s;
        else
        {
            if(1LL*(n*(n+1)/2)<s)cout<<-1;
            else
            {
                ull sum=0;
                vector<ll>v;
                for(int i = n ; i >=1 ; i--)
                {
                    if(sum==s)break;
                    if(sum+i>s){v.push_back(s-sum);break;}
                    v.push_back(i);
                    sum+=i;
                }
                cout<<v.size()<<" ";
                for(int i = 0 ; i < v.size()-1; i++)
                {
                    cout<<v[i]<<" ";
                }
                cout<<v[v.size()-1];
            }
        }
        cout<<"\n";
    }

}