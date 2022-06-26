#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ull unsigned long long
#define pb(x) emplace_back(x)
#define testcase int t ; cin>>t ; while(t--)
#define fx(x) fixed<<setprecision(x)
#define bobo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define arrayn int n;cin>>n;int x[n]; for ( int i = 0 ; i < n ; i++){cin>>x[i];}
using namespace std ;
int main (){
    bobo;
    ll n , k ;
    cin>>n>>k;
    ll x[n],sum=0,sum1=0,temp;
    for ( int i = 0 ; i < n ; i++)
    {
        cin>>x[i];
    }
    if (k==1)
    {
        cout<<*max_element(x,x+n)<<endl;return 0;
    }
    for ( int i = 0 ; i < k ; i++)
    {
        sum1+=i;
    }
    for ( int i = 0 ; i < n  ; i ++)
    {
        for ( int j = 0 ; j < k ; j++)
        {
            sum+=x[j];
        }
        if(sum1<sum)
        {
            sum1=sum;
        }
        sum=0;
    }
    cout<<sum1<<endl;
}
