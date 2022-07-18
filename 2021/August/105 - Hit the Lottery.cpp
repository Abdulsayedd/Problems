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
    ll n,coun=0;
    cin>>n;
    while (n!=0)
    {
        if ((n-100)>=0)
            {
                coun++;
            n-=100;
            }
        else
        {
            if (n-20>=0)
            {
                coun++;
                n-=20;
            }
            else
            {
                if (n-10>=0)
                {
                    coun++;
                    n-=10;
                }
                else
                {
                    if(n-5>=0)
                    {
                        coun++;
                        n-=5;
                    }
                    else
                    {
                        coun++;
                        n--;
                    }
                }
            }
        }
    }
    cout<<coun;

}
