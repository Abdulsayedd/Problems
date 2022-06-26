
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
        int s,t,a,o,m,n,suma=0,sumo=0;
        cin>>s>>t;//house start and end
        cin>>a>>o;//apple and orange tree places
        cin>>m>>n;//apple array and orange array
        int x[m],y[n];//arrays
        for(int i = 0 ; i < m ; i++)
        {
            cin>>x[i];
            if(a+x[i]>=s && a+x[i]<=t)
            {
                suma++;
            }
        }
        for(int i = 0 ; i < n ; i++)
        {
            cin>>y[i];
            if(o+y[i]>=s && o+y[i]<=t)
            {
                sumo++;
            }
        }
        cout<<suma<<endl<<sumo;



    }
