
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
        testcase
        {
            int f=0;
            ll sum=0;
            map<char,int>v;
            int coun=0;
            int coun_=0;
            int n;cin>>n;
            string x;cin>>x;
            for(int i = 0 ; i < n ; i++)
            {
                if(x[i]=='_')
                {
                    coun_++;
                }
            }
            int h=n-coun_;
            if(coun_==n)
            {
                cout<<"YES"<<endl;continue;
            }
            else
            {
                for(int i = 0 ; i < n ; i++)
                {
                    if(x[i]!='_')
                    {
                        v[x[i]]++;
                    }
                }
                for(auto it=v.begin();it!=v.end();it++)
                {
                    int m=it->second;
                    if(m==1)
                    {
                        f=1;
                    }
                }
            }
            if(f==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }

    }
