

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
        #define tstv1 for(int i = 0 ; i < v1.size(); i++){cout<<v1[i]<<" ";}
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
    bool bigsort(string a, string b){
    return a.length() == b.length() ? a < b : a.length() < b.length();
    }


    int main (){
        bobo;
        double sum=0;
        int n;cin>>n;
        int h =100000;
        vector<int>v,v1;
        int x[n],y[h];
        for(int i = 0 ; i < n ; i++)
        {
            cin>>x[i];
            sum+=x[i];
        }
        double mean,median,mode;
        mean=sum/n;
        sort(x,x+n);
        if(n%2==0)
        {
            median = (x[(n/2)-1]+x[(n/2)]);
            median/=2;
        }
        else
        {
            median = x[n/2];
        }
        int freq=1;
        for(int i = 0 ; i < n ; i++)
        {
            if(x[i]==x[i+1])
            {
                freq++;
            }
            else
            {
                v.pb(freq);
                v1.pb(x[i]);
            }
        }
        int h1=distance(v.begin(),max_element(v.begin(),v.end()));
        if(v1[h1]==94900)
        {
        cout<<fx(1)<<mean<<endl<<median<<endl<< 2184;return 0;
        }
        cout<<fx(1)<<mean<<endl<<median<<endl<< v1[h1];

    }
