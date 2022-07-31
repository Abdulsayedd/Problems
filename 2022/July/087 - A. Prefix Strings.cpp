#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int n,m;cin>>n>>m;
    map<string,int>mp;
    for(int i = 0 ; i < n ; i++)
    {
        string x;cin>>x;
        for(int j = 0 ; j < x.size() ; j++)
        {
            string y="";
            for(int k = 0 ; k <= j ; k++)
            {
                y+=x[k];
            }
            mp[y]++;
            y="";
        }
    }
    while(m--)
    {
        string z;
        cin>>z;
        cout<<mp[z]<<"\n";
    }
}

