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

        int x;
        cin>>x;
        if ((x%10)%(x/10)==0 || (x/10)%(x%10)==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

}
