
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
        int d1,d2,m1,m2,y1,y2;
        ll coun=0;
        cin>>d2>>m2>>y2;
        cin>>d1>>m1>>y1;
        if(y1>y2)
        {
            cout<<0;return 0;
        }
        if(y1==y2 && m1>m2)
        {
            cout<<0;return 0;
        }
        if(y1==y2 && m1==m2 && d1>d2)
        {
            cout<<0;return 0;
        }

        if(y2>y1)
        {
            coun+=abs(y2-y1)*10000;
        }
        else if(m2>m1)
        {
            coun+=abs(m2-m1)*500;
        }
        else if(d2>d1)
        {
            coun+=abs(d2-d1)*15;
        }
        cout<<coun;
    }
