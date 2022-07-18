#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    int yay=0,wops=0;
    string s,t;cin>>s>>t;
    map<char,int>mp,mp1;
    for(char i : s)mp[i]++;
    for(char i : t)
    {
        if(mp[i])mp[i]--,yay++;
        else mp1[i]++;
    }
    t=s="";
    for(auto i : mp1)
        while(i.second)t+=i.first,i.second--;
    for(auto i : mp)
        while(i.second)s+=i.first,i.second--;
    mp.clear();mp1.clear();
    for(int i = 0 ; i < s.size() ; i++)s[i]=tolower(s[i]),mp[s[i]]++;
    for(int i = 0 ; i < t.size() ; i++)t[i]=tolower(t[i]);
    for(char i : t)
        if(mp[i])mp[i]--,wops++;
    cout<<yay<<" "<<wops;
}