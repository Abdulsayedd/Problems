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
        ll mshkah=0,kres=0;
        testcase
        {
            int x,y;
            cin>>x>>y;
            if (x>y)
            {
                mshkah++;
            }
            else if (y>x)
            {
                kres++;
            }
        }
        if (mshkah>kres)
        {
            cout<<"Mishka"<<endl;return 0;
        }
        else if (kres>mshkah)
        {
            cout<<"Chris"<<endl;return 0;
        }
        else
        {
            cout<<"Friendship is magic!^^"<<endl;return 0;
        }
    }
