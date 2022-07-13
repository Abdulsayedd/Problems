#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    freopen ("evil.in","r", stdin);
    int t;cin>>t;
    while(t--)
    {

        int h,w,m;
        cin>>h>>w>>m;
        string ans;
        if(w==2)
        {
            if((h&1) && m==2 || !(h&1)&& m==1)ans="No";
            else ans="Yes";
        }
        else
        {
            w*=2;
            h%=w-2;
            if(h==m||h==w-m)ans="Yes";
            else ans="No";
        }
        cout<<ans<<"\n";
    }
}