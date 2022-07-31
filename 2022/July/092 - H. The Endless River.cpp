#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int t,n,d,r;cin>>t;
    while(t--)
    {
        vector<int>david(100001,0);
        vector<int>roger(100001,0);
        cin>>n>>d>>r;
        int m=1,ans;
        david[1]=1;
        while(true)
        {
            if(roger[m*d%n]){ans=m;break;}
            else david[m*d%n]=1;
            if(david[m*r%n]){ans=m;break;}
            else roger[m*r%n]=1;
            m++;
        }
        cout<<ans<<"\n";
    }
}