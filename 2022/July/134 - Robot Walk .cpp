#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
long long const MOD=1000000007;
int main () {
    pre;
        string x,y;
        int n,m,h;
        cin>>n>>m>>x>>h>>y;
        m--;
        cout<<x[m];
        for(int i = 0 ; i < h ; i++)
        {
            if(m<h && y[i]=='R')m++;
            else if (m>=0 && y[i]=='L')m--;
            cout<<x[m];
        }
        cout<<"\n";
}