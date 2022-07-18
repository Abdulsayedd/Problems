//================= سكيب ذيس =================\\

 #include <bits/stdc++.h>
        #define ll long long
        #define ld long double
        #define ull unsigned long long
        #define pb(x) push_back(x)
        #define testcase int t ; cin>>t ; while(t--)
        #define fx(x) fixed<<setprecision(x)
        #define leadz(x) std::setfill('0') << std::setw(x)
        #define bobo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
        #define arrayn int n;cin>>n;int x[n]; for ( int i = 0 ; i < n ; i++){cin>>x[i];}
        #define tstv for(int i = 0 ; i < v.size(); i++){cout<<v[i]<<" ";}
	#define fnd(v,u) bool hh = v.find(u) != v.end();
    using namespace std ;
//================= سكيب ذيس =================\\

    ull factorial(ull n)
        {if (n == 0)
        return 1;
        else
        return n * factorial(n - 1);}

    int gcd(int a,int b)
    {if(b==0)return a;
    else return gcd(b,a%b);}

    int lcm(int a,int b)
    {return a*b/gcd(a,b);}
//================= بسم الله =================\\

    int main (){
        bobo;
        testcase
        {
            ll n,m,b;
            cin>>n>>m>>b;
            ll x[n][m],y[n][m];

            for(int i = 0 ; i < n ; i++)
            {
                for(int j = 0 ; j < m ; j++)
                {
                    if(j==0)
                    {
                       y[i][j]=i+1;
                    }
                    else
                    {
                    y[i][j]=y[i][j-1]+3;
                    }
                }
            }
            ll coun=1;
            for(int i = 0 ; i < n ; i++)
            {
                for(int j = 0 ; j < m ; j++)
                {
                    x[i][j]=coun;
                    coun++;
                }
            }

            ll strt=(max(b,m)/min(b,m))-1;
            for(int i = strt ; i < n ; i++)
            {
                for(int j = 0 ; j < m ;j++)
                {
                    if (b==y[i][j])
                    {
                        cout<<x[i][j]<<endl;
                    }
                }
            }
           /* for(int i = 0 ; i < n ; i++)
            {
                for(int j = 0 ; j < m ; j++)
                {
                    cout<<x[i][j]<<" ";
                }
                cout<<endl;
            }*/

        }

    }
