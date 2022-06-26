        #include <bits/stdc++.h>
        #define ll long long
        #define ld long double
        #define ull unsigned long long
        #define pb(x) emplace_back(x)
        #define testcase int t ; cin>>t ; while(t--)
        #define fx(x) fixed<<setprecision(x)
        #define bobo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
        #define arrayn long long n;cin>>n;long long x[n]; for ( long long i = 0 ; i < n ; i++){cin>>x[i];}
    using namespace std ;
    int main (){
     bobo;
     testcase{
                int n;
                cin>>n;
                ll x[n],y[n];
                ll minn1=1e9,minn2=1e9,minn=0,coun=0,maxx=0;
                for (int i = 0 ; i < n ; i++)
                {
                    cin>>x[i];
                    if (x[i]<minn1)
                    {
                        minn1=x[i];
                    }
                }
                 for (int i = 0 ; i < n ; i++)
                {
                    cin>>y[i];
                    if (y[i]<minn2)
                    {
                        minn2=y[i];
                    }
                }
                minn=min(minn1,minn2);
                for (int i = 0 ; i < n ; i++)
                {
                    coun+=max(x[i]-minn1,y[i]-minn2);
                }
                cout<<coun<<endl;
}
    }

