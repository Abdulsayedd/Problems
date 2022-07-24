#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int main () {
    pre;
    int n,m;cin>>n;m=n;
    string arr[n];
    vector<vector<int>>arr1;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    map<char,int>mp;
    vector<int>v;
    for(int i = 0 ; i < n ; i++)
    {
        mp.clear();
        v.clear();
        int c=0;
        for(char j : arr[i])
        {
            if(!mp[j])
            {
                mp[j]=c+1;
                c++;
                v.push_back(c);
            }
            else v.push_back(mp[j]);
        }
        arr1.push_back(v);
    }
    map<vector<int>,long long>mp1;
/*    for(auto i : arr1)
    {
        for(auto j : i)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }*/
    for(int i = 0 ; i < arr1.size() ; i++)
    {
        mp1[arr1[i]]++;
    }
    long long sum=0;
    for(auto i : mp1)
    {
        if(i.second>1)sum+=1LL*(i.second*(i.second-1))/2;
    }
    cout<<sum;
}