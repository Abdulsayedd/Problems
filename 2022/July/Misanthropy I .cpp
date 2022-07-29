#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define ull unsigned long long
const ll mod=1000000007;
ull mul(ull a,ull b)
{
    return ((a%mod)*(b%mod))%mod;
}
int main (){
    pre;
    int t;cin>>t;
    int sum1,sum2;
    sum1=sum2=0;
    while(t--)
    {
        char ch;cin>>ch;
        if(ch=='+')sum1++;
        else sum2++;
    }
    if(sum1!=sum2)cout<<"NotDeadly";
    else cout<<"Deadly";
}