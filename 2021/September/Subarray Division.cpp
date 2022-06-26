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
    using namespace std ;
    int main (){
        bobo;
        arrayn;
        int d,m;cin>>d>>m;
        int temp=0,coun=0;
        for(int i = 0 ; i < n ; i ++)
        {
            temp=x[i];
            for(int j = i+1 ; j < i+m ; j++)
            {
                temp+=x[j];
            }
            if (temp==d)
            {
                coun++;
            }
        }
        cout<<coun;
    }
