#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    string x;cin>>x;
    int sum=0;
    for(char i : x)sum+=i-'0';
    cout<<sum;
}