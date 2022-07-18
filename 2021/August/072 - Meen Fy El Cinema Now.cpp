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
    int n,coun=0 ; cin>>n;
    string x;cin>>x;
    for ( int i = 0 ; i < x.size() ; i++)
    {
        if (x[i]=='0')
        {
            coun++;
            if (coun>n)
            {
                cout<<"YES"<<endl;return 0;
            }
        }
        else
        {
            coun=0;
        }
    }
    cout<<"NO"<<endl;
}
