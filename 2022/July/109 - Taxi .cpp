#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    double n,sum,c1,c3,ans;
    cin>>n;
    sum=c1=c3=ans=0;
    for(int i = 0 ; i< n ;i++)
    {
        int h;cin>>h;
        h==1?c1++:h==3?c3++:c1;
        sum+=h;
    }
    if(c1<c3)
    {
        ans+=c3;sum-=c1+c3*3;
    }
    ans+=ceil(sum/4);
    cout<<ans;
}