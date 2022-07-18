#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int n;cin>>n;
    int arr[n];
    int mx{};
    string ans{};
    vector<int>maxs;
    for(int i = 0 ; i < n ; i++) cin>>arr[i];
    for(int i = n-1 ; i >=0 ; i--) // get all maxs in row 1 2 3 5
    {
        if(mx<=arr[i])
        {
            maxs.push_back(arr[i]);
            mx=arr[i];
        }
    }
    reverse(maxs.begin(),maxs.end());// 5 3 2 1 from the right
    int mxi=0;
    vector<pair<int,int>>v;
    int mxlft=arr[0];
    for(int i = 0 ; i < n ; i++)
    {
        mxlft=max(mxlft,arr[i]);//left max
        if(arr[i]==maxs[mxi])
        {
            if(mxi<maxs.size()-1)
            mxi++;
        }
        v.emplace_back(mxlft,maxs[mxi]);//left max , right max ++
    }
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i]>=v[i].first && arr[i]>=v[i].second)
        {
            cout<<"both";
        }
        else if(arr[i]>=v[i].first)
        {
            cout<<"left";
        }
        else if(arr[i]>=v[i].second)
        {
            cout<<"right";
        }
        else cout<<"none";
        cout<<"\n";
    }

}