//https://codeforces.com/group/xkS6MyTkfj/contest/262216/problem/C
#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define ld long double
int main () {
    pre;
    int n;cin>>n;
    string x;cin>>x;
    string y="";
    for(char i : x)
    {
        if(i!='.')y+=i;
    }
    y==""?cout<<"Null":cout<<y;
}