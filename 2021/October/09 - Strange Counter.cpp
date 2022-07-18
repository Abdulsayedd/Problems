

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
        /*vector<ll>v;
        vector<ll>v1;
        ll m=3,n=m;
        for(int i = 0 ; i <= 1e7 ; i++)
        {

            if(m==1)
            {
                v.pb(m);
                m=n*2;
                n=n*2;
            }
            v.pb(m);
            m--;
        }
        int h;cin>>h;
        cout<<v[h]+1;*/
    ll three = 3;
    ll n;
    cin >> n;

    while(n > three) {
        n -= three;
        three *= 2;
    }

    cout <<three-n+1;



    }
