#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
int main (){
        pre;
        int t;cin>>t;
        while(t--)
        {
            map<int,int>mp;
            int n;cin>>n;
            int arr[n];
            for(int i = 0 ; i < n ; i++)
            {
                cin>>arr[i];
            }
            int ss=0;
            for(int i = n-1 ; i >=0; i--)
            {
                mp[arr[i]]++;
                if(mp[arr[i]]>1){ss=i+1;break;}
            }
            cout<<ss<<"\n";
        }
}