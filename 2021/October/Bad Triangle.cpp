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

    string lexo(string x)
    {
    if(next_permutation(x.begin(),x.end()))
    {return x.c_str();}
    else
    {return "no answer";}
    }
//================= بسم الله =================\\

    int main (){
        bobo;
        testcase
{
        int f=0;
        int n;cin>>n;
        vector<int>v;
        for(int i = 0 ; i < n ; i++)
        {
            int h;cin>>h;
            v.pb(h);
        }
        int i=0;
        if( v[i] + v[i+1] <=v.back())
        {
            cout<<i+1<<" "<<i+2<<" "<<n<<endl;
            f=1;
        }
        else
        {
            cout<<-1<<endl;
        }
}

    }
