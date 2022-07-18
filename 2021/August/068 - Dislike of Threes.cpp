    #include <bits/stdc++.h>
    #define super ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    #define ll long long
    #define ld long double
    #define ull unsigned long long
    #define pb(x) push_back(x)
    #define testcase int t ; cin>>t ; while(t--)
    #define fx(x) fixed<<setprecision(x)
    #define bobo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main (){
    bobo;
    int c=0;
    long long x[1001];
    for ( int i = 1 ; i <= 1666 ; i++)
    {
        if (i%3!=0 && i%10 != 3)
        {
            x[c]=i;
            c++;
        }
        else
        {
            continue;
        }
    }
    testcase
    {
       int n;
       cin>>n;
       cout<<x[n-1]<<endl;
    }


}
