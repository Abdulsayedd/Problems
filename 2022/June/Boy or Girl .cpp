#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    string x;cin>>x;
    set<char>s;
    for(char i:x)s.insert(i);
    s.size()%2==0?cout<<"CHAT WITH HER!":cout<<"IGNORE HIM!";
}