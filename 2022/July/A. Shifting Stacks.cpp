//============================
// Name        : A. Shifting Stacks
// Author      : Abdulsayed
// Version     : 2022
// Description : Recursion
// Link        : https://codeforces.com/problemset/problem/1486/A
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
        bool f = false;
        int n;cin>>n;
        int arr[n];
        long long f1=0,f2=0;
        for(int i = 0 ; i < n ; i++)
        {
            cin>>arr[i];f1+=i;f2+=arr[i];
            if(f1>f2){f=true;}
        }
        f?cout<<"NO"<<"\n":cout<<"YES"<<"\n";
    }
    
}