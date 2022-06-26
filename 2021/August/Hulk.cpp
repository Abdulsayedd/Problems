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
    int n;
    cin>>n;
    for ( int i = 0 ; i < n ; i++)
    {
        if (i%2==0 && n-i !=1)
        {
            cout<<"I hate that ";
        }
        else if (i%2==1 && n-i != 1)
        {
            cout<<"I love that ";
        }
        else if (i%2==0 && n-i==1)
        {
            cout<<"I hate it ";
        }
        else if (i%2==1 && n-i == 1)
        {
          cout<<"I love it ";
        }
    }
}

