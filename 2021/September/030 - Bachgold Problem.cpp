        #include <bits/stdc++.h>
        #define ll long long
        #define ld long double
        #define ull unsigned long long
        #define pb(x) emplace_back(x)
        #define testcase int t ; cin>>t ; while(t--)
        #define fx(x) fixed<<setprecision(x)
        #define bobo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
        #define arrayn int n;cin>>n;int x[n]; for ( int i = 0 ; i < n ; i++){cin>>x[i];}
    using namespace std ;
    int main (){
        bobo;
        int n;
        cin>>n;
        int o=n/2;
        int coun=0;
        vector<int>v;
        for (int i = 0 ; i < o ; i++)
        {
            if (n%2==1)
            {
                coun++;
                v.pb(3);
                n-=3;
            }
            else
            {
                coun++;
                v.pb(2);
                n-=2;
            }
        }
        cout<<coun<<endl;
        for (int i = 0 ; i < o ; i++)
        {
            cout<<v[i]<<" ";
        }
    }
