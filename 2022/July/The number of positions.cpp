#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    int n,a,b;
    cin>>n>>a>>b;
    cout<<min(n-a,b+1);
}

