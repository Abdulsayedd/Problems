//https://codeforces.com/problemset/problem/1365/A
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    map<pair<int,int>,int>unclaimed;
    map<int,int>claimedi,claimedj;
    int t;cin>>t;
    int n,m,h;
    while(t--)
    {
        unclaimed.clear();claimedi.clear();claimedj.clear();
        cin>>n>>m;
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                cin>>h;
                if(h==0)unclaimed[{i,j}]=1;
                else
                {
                    claimedi[i]=1;
                    claimedj[j]=1;
                }
            }
        }
        int c=0;
       for(auto i : unclaimed)
       {
           if(claimedi[i.first.first] || claimedj[i.first.second])c;
           else
           {
               c++;
               claimedi[i.first.first]=1;
               claimedj[i.first.second]=1;
           }
       }
        !(c&1)?cout<<"Vivek":cout<<"Ashish";
       cout<<"\n";
    }
}