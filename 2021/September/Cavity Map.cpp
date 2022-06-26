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

    string lexo(string x)
    {
    if(next_permutation(x.begin(),x.end()))
    {return x.c_str();}
    else
    {return "no answer";}
    }

    int main (){
        bobo;
        ll n;cin>>n;
        char x[n][n];
        for(int i = 0 ; i < n ; i++)
        {
            string h;cin>>h;
            for(int j = 0 ; j < n ; j++)
            {
                x[i][j]=h[j];
            }
        }
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                if (x[i][j]>x[i-1][j] && n-i!=1 && n-j!=1)
                {
                    if(x[i][j]>x[i+1][j]&& n-i!=1 && n-j!=1)
                    {
                        if(x[i][j]>x[i][j-1]&& n-i!=1 && n-j!=1)
                        {
                            if(x[i][j]>x[i][j+1]&& n-i!=1 && n-j!=1)
                            {
                                x[i][j]='X';
                            }
                        }
                    }
                }
            }
        }
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j<n ; j++)
            {
                cout<<x[i][j];
            }
            cout<<endl;
        }
    }
