// https://codeforces.com/group/UZxBcPr4qR/contest/249115/problem/B
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    /*
     * a=number of people;
     * b=number of airplanes each should make;
     * c=number of airplanes that can be made using one sheet;
     * d=number of sheets in one pack;
     */
    long long a,b,c,d,ans;cin>>a>>b>>c>>d;
        ans=ceil(((double)(ceil((double)b/c))*a)/d);
        cout<<ans;
}