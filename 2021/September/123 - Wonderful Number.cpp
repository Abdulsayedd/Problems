//=================سكيب ذيس=================
 #include <bits/stdc++.h>
        #define ll long long
        #define ld long double
        #define ull unsigned long long
        #define pb(x) emplace_back(x)
        #define testcase int t ; cin>>t ; while(t--)
        #define fx(x) fixed<<setprecision(x)
        #define leadz(x) std::setfill('0') << std::setw(x)
        #define bobo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
        #define arrayn int n;cin>>n;int x[n]; for ( int i = 0 ; i < n ; i++){cin>>x[i];}
        #define tstv for(int i = 0 ; i < v.size(); i++){cout<<v[i]<<" ";}
	#define fnd(v,u) bool hh = v.find(u) != v.end();
    using namespace std ;
//=================سكيب ذيس=================
    ull factorial(ull n)
{
    if (n == 0)
        return 1;
        else
    return n * factorial(n - 1);
}
//=================بسم الله=================
    int main (){
        bobo;
        int f=0;
        string x; cin>>x;
        string y=x;
        reverse(x.begin(),x.end());
        if(y==x)
        {
            f++;
        }
        int h = stoi(x);
        if(h%2==1)
        {
            f++;
        }
        f==2?cout<<"YES":cout<<"NO";return 0;



    }
