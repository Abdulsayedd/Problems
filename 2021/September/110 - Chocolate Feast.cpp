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
    using namespace std ;
//===================
    ull factorial(ull n)
{
    if (n == 0)
        return 1;
        else
    return n * factorial(n - 1);
}
    int main (){
        bobo;
    testcase
    {
        int coun=0;
        int kes=0,kes_ziada=0,kese=0;//15,3,2
        int n,c,m;cin>>n>>c>>m;
        kes=n/c;//5
        coun+=kes;//5
        kese=kes;//5
        while(coun>=m)
        {
            coun-=m;
            coun++;
            kese++;
        }
        cout<<kese<<endl;
    }
    }
