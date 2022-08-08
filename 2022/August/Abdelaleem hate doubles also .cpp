#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
int freq[27];
int main (){
    pre;
    string x;cin>>x;
    for(char i : x)
    {
        freq[i-'a']++;
    }
    double ans=0;
    for(char i : x)
    {
        ans+=freq[i-'a'];
    }
    cout<<fixed<<setprecision(15)<<ans/x.size()*1.0;
}