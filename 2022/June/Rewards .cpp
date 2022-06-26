#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    double n,m,c,h;m=0,c=0;
    for(int i = 0 ; i < 3 ; i++){cin>>h;c+=h;}
    for(int i = 0 ; i < 3 ; i++){cin>>h;m+=h;}
    cin>>n;
    ((ceil(c/5)+ceil(m/10))<=n)?cout<<"YES"<<endl:cout<<"NO"<<endl;
}