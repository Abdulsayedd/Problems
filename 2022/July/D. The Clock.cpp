// Problem     : D. The Clock , https://codeforces.com/contest/1692/problem/D
// Author      : Abdulsayed
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
bool pl(int h,int m){
    int h1=h%10,h2=h/10,m1=m%10,m2=m/10;
    return h1==m2&&h2==m1;
}
int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
        string x;
        int chng,c=0;
        cin>>x>>chng;
        int hours,mins,initialhours,initialmins;
        initialhours=stoi(x.substr(0,2));
        initialmins=stoi(x.substr(3,2));
        hours = initialhours;
        mins = initialmins;
        do{
            hours += (chng / 60);
            if(hours>=24)hours%=24;
            mins += (chng % 60);
            if(mins>=60){hours++;mins%=60;}
            if(hours>=24)hours%=24;
            pl(hours, mins) ? c++ : c;
        }
        while(hours!=initialhours || mins!=initialmins);
        cout<<c<<"\n";
    }
}

