//============================
// Name        : A. Alarm Clock
// Author      : Abdulsayed
// Version     : 2022
// Description : Recursion
// Link        : https://codeforces.com/problemset/problem/1354/A
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        long long ans;
        if(b>=a)ans=b;
        else if(d>=c)ans=-1;
        else
        {
            ans=((a-b)/(c-d));
            ((a-b)%(c-d))?ans++:ans;
            ans*=c;
            ans+=b;
        }
        cout<<ans<<"\n";
    }
}