#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string arr[n];
        bool f = false;
        map<string,int>mp;
        for(int i = 0 ; i < n ; i++)
        {
            cin>>arr[i];
            mp[arr[i]]=1;
        }
        for(int i =0 ;i < n ; i++)
        {
            f=false;
            for(int j = 0 ; j < arr[i].size() ; j++)
            {
                string y=arr[i].substr(j,arr[i].size()-j);
                string x=arr[i].substr(0,j);
                //cout<<y<<" "<<x<<"\n";
                if(mp[x] && mp[y]){f=true;break;}
            }
            f?cout<<1:cout<<0;
        }
        cout<<"\n";
    }
}