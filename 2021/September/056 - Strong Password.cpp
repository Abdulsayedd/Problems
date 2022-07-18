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
        int n;cin>>n;
        string x;cin>>x;
        int counf=0,coun=0,sml=0,cptl=0,special=0,dgt=0,countt=0;

        for(int i = 0 ; i < x.size() ; i++)
        {
            if (x[i]<=90 && x[i]>=65)
            {
                sml=1;
            }
            else if (x[i]>=97 && x[i]<=122)
            {
                cptl=1;
            }
            else if (isdigit(x[i]))
            {
                dgt=1;
            }
            else
            {
                special=1;
            }
        }
        countt=dgt+special+cptl+sml;
        if (countt!=4)
        {
            coun+=4-countt;
        }
        if (n+coun<6)
        {
            coun+=6-(coun+n);
        }
        cout<<coun;

    }
