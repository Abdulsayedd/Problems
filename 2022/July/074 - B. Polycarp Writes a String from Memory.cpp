//============================
// Name        : B. Polycarp Writes a String from Memory
// Author      : Abdulsayed
// Version     : 2022
// Description :
// Link        : https://codeforces.com/contest/1702/problem/B
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
long long arr[1000005];
int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
        int c=0;
        string x;cin>>x;
        set<char>s;
        for(int i = 0 ; i < x.size() ;i++)
        {
            s.insert(x[i]);
            if(s.size()==4)
            {
                c++;
                s.clear();
                i--;
            }
        }
        if(!s.empty())c++;
        cout<<c<<"\n";
    }
}
