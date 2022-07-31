//https://codeforces.com/group/UZxBcPr4qR/contest/248942/problem/G
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    /*
     * if(x>y)we can do all doors;
     * if(x<y)we can do half of the doors less than our durability power;
     */
    short n,m;cin>>n;m=n;
    double x,y,h,c=0;cin>>x>>y;
    while(m-- &&cin>>h)
    {
        if(h<=x)c++;
    }
    if(x>y)cout<<n;
    else cout<<ceil(c/2);
}