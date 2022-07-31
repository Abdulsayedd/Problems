//============================
// Name        : D. Not a Cheap String
// Author      : Abdulsayed
// Version     : 2022
// Description :
// Link        : https://codeforces.com/contest/1702/problem/D
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
        map<char,int>mp;
        string x,y;cin>>x;
        int n,sum=0;cin>>n;
        y=x;
        sort(x.begin(),x.end());
        for(int i = 0 ; i < x.size() ;i++)
        {
            if(sum+x[i]-'a'+1<=n)
            {
                sum+=x[i]-'a'+1;
                mp[x[i]]++;
            }
            else break;
        }
        for(int i = 0 ; i < y.size() ;i++)
        {
            if(mp[y[i]]>0)
            {
                cout<<y[i];
                mp[y[i]]--;
            }
        }
        cout<<"\n";
    }
}
