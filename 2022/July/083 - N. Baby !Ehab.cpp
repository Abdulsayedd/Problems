// Problem     : N. Baby !Ehab , https://codeforces.com/gym/102881/problem/N
// Author      : Abdulsayed
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    freopen ("equal.in","r", stdin);
    int t,a,b,c;cin>>t;
    string arr[t];
    int i=0;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a==b||a==c||c==b)arr[i++]="YES";
        else arr[i++]="NO";
    }
    for(auto i : arr)cout<<i<<"\n";
}

