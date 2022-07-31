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
        unordered_map<string,int>mp;
        for(int i = 0 ; i < n ; i++)cin>>arr[i];
        int end=-1;
        int c=0;
        for(int i = 0 ; i < n ; i++)
        {
            string x;cin>>x;
            mp[x]==0?mp[x]=1:mp.erase(x);
            mp[arr[i]]==0?mp[arr[i]]=1:mp.erase(arr[i]);
            if(mp.empty())
            {
                cout<<i-end;
                end=i;
                if(i==n-1)cout<<"\n";
                else cout<<" ";
            }
        }
    }
}
