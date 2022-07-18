#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
long long const MOD=1000000007;
int main () {
    pre;
    int n;cin>>n;
    string x;cin>>x;
    int happy,sad;happy=sad;
    for(int i = 0 ; i < n ; i++)
    {
        if(x[i]==':')
        {
            if(x[i-1]=='(')happy++;
            else if(x[i-1]==')')sad++;
            if(x[i+1]=='(')sad++;
            else if (x[i+1]==')')happy++;
        }
    }
    cout<<(happy==sad?"BORED":happy>sad?"HAPPY":"SAD")<<"\n";
}