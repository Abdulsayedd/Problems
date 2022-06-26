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
{
    if (n == 0)
        return 1;
        else
    return n * factorial(n - 1);
}
//================= بسم الله =================\\

    int main (){
        bobo;
        testcase
        {
            set<int>v;
            int n;cin>>n;
            for(int i = 0 ; i < n ; i++)//3 *1* 4 5 9 *3* 1 4 5 9 3 1 *4* 5 9 3 1 4 *5* 9 3 1 4 5 *9*
            {
                int h ;cin>>h;
                v.insert(h);
            }
            cout<<v.size()<<endl;
        }

    }
