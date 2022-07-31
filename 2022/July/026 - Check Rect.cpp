//============================
// Name        : Check Rectangle
// Author      : Abdulsayed
// Version     : 2022
// Description :
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int a,b,c,d;cin>>a>>b>>c>>d;
    (a!=b &&a!=d &&a!=c ||a!=b && b!=c && b!=d ||b!=c&&a!=c&& c!=d)?cout<<"NO"<<endl:cout<<"YES"<<endl;

}