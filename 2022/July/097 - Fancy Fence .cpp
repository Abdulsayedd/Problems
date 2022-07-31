#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
string fun(int n)
{
    if(360%(180-n)==0)
    {
        return "YES";
    }
    return "NO";
}
int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        cout<<fun(n)<<"\n";
    }
}