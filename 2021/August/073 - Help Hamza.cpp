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
        int n,a,b,c;cin>>n>>a>>b>>c;
        int x[3];
        x[0]=a;
        x[1]=b;
        x[2]=c;
        sort(x,x+3);
        a=x[0];
        b=x[1];
        c=x[2];
        if(n%a==0)
        {
            cout<<n/a<<endl;return 0;
        }
        else if(n%b==0)
        {
            cout<<n/b<<endl;return 0;
        }
        else if(n%c==0)
        {
            cout<<n/c<<endl;return 0;
        }
        else
        {
            while (n--)
            {
        if(n%a==0)
        {
            cout<<n/a<<endl;return 0;
        }
        else if(n%b==0)
        {
            cout<<n/b<<endl;return 0;
        }
        else if(n%c==0)
        {
            cout<<n/c<<endl;return 0;
        }
            }
        }
}
