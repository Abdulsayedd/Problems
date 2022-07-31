#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int main () {
    pre;
    map<char,int>mp;
    mp['U']=1;mp['D']=-1;mp['R']=1;mp['L']=-1;
    int x,y;
    cin>>x>>y;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if (s[i]=='U'||s[i]=='D')
            y+=mp[s[i]];
        else x+=mp[s[i]];
    }
    cout<<x<<" "<<y<<endl;
}