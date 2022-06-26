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
    for ( int i = n+1 ; i < 9999 ; i++)
    {
        int coun=0;
        stringstream s;
        s<<i;
        string x;
        s>>x;
        if (x[0]!=x[1] && x[0]!=x[2] && x[0]!=x[3] && x[1]!=x[2] && x[1]!=x[3] && x[2]!=x[3])
        {
            cout<<x<<endl;return 0;
        }
    }
    }

