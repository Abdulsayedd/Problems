#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
int main (){
        pre;
        int n;cin>>n;
        string x;cin>>x;
        if(n>26)cout<<-1;
        else
        {
            map<char,int>mp;
            for(char i : x)mp[i]++;
            ll sum=0;
            for(auto i : mp)sum+=i.second-1;
            cout<<sum;
        }
}