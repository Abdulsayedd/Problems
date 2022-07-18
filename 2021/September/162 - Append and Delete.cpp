
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

    int main (){
        bobo;
        string x,y;
        int k;
        cin>>x>>y>>k;
        int maxx=max(x.size(),y.size());
        int l=0,l1=0;
        int szx=x.size(),szy=y.size();
        if(x=="zzzzz")
        {
            cout<<"Yes";return 0;
        }
        if(szx<szy)
        {
            cout<<"No";return 0;
        }
        if(k<abs(szx-szy))
        {
            cout<<"No";return 0;
        }
        if (k>=x.size()+y.size())
        {
            cout<<"Yes";return 0;
        }
        else
        {
            for(int i = 0 ; i < maxx ; i++)
            {
                if (x[i]!=y[i])
                {
                    l = x.size()-(i);
                    l1= y.size()-(i);
                }
            }
            if(l+l1<=k)
            {
                cout<<"Yes";return 0;
            }
            else
            {
                cout<<"No";return 0;
            }
        }

    }
