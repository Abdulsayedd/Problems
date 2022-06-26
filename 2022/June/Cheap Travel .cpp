#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    int n,m,a,b,sum={},c={};cin>>n>>m>>a>>b;
    int oneforall={},allforone={};

        while (allforone + m < n)
            oneforall += b,allforone += m;

        oneforall += a * (n - allforone); // all except

        while(c<n)
            sum+=b,c+=m; // all prime

    cout<<min({oneforall ,sum,a*n });
}