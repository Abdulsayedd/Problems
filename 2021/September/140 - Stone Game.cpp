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
           int n;cin>>n;
           int x[n];
           int maxx=INT_MIN,minn=INT_MAX,maxxi=0,minni=0;
           int mnr=0,mnl=0,mxr=0,mxl=0;
           for(int i = 0 ; i < n ; i++)
           {
                cin>>x[i];
               if(maxx<x[i])
               {
                   maxx=x[i];
                   maxxi=i+1;
               }
               if(minn>x[i])
               {
                   minn=x[i];
                   minni=i+1;
               }
           }
           mnl=minni;
           mnr=n-minni+1;
           mxl=maxxi;
           mxr=n-maxxi+1;
           int maxo,maxo2,maxo3,maxo4;
           //cout<<" mnr = "<<mnr<<" mnl = "<<mnl<<" mxr = "<<mxr<<" mxl = "<<mxl<<endl;
            maxo=max(mnr,mxr);
            maxo2=max(mnl,mxl);
            maxo3=mnr+mxl;
            maxo4=mnl+mxr;
            cout<<min({maxo,maxo2,maxo3,maxo4})<<endl;

        }
    }
