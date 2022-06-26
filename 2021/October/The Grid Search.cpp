
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
            int coun=0;
            int n,o;cin>>n>>o;
            string x[n];
            for(int i = 0 ; i< n ;i++)
            {
                cin>>x[i];
            }
            int a,b;cin>>a>>b;
            string y[a];
            for(int i = 0 ; i < a ;i++)
            {
                cin>>y[i];
            }
            int c=0,jp=0,f=0;
            for(int i = 0 ;i < n; i++)
            {
                for(int j = 0 ; j < x[i].size() ; j++)
                {
                    string x1=x[i];
                    string x2=x1.substr(j,b);
                    //cout<<"x2 substr = "<<x2<<" x1 = "<<x1<<endl;
                    if(x2==y[c]&&f==0)
                    {
                        coun++;
                        //cout<<"equal counter = "<<x2<<" "<<y[i]<<endl;
                        c++;
                        jp=j;
                        f=1;
                        break;
                    }
                    if(x2==y[c]&&j==jp)
                    {
                        coun++;
                        //cout<<"equal counter = "<<x2<<" "<<y[c]<<" "<<jp<<endl;
                        c++;
                        jp=j;
                        break;
                    }
                }
            }
            if(coun==a)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }


        }


    }
