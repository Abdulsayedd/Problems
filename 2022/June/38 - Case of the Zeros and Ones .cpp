#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    int n,z=0,o=0;cin>>n;
    string x;cin>>x;
    for(int i = 0 ; i < n ; i++)x[i]=='0'?z++:o++;
    cout<<abs(o-z);
}