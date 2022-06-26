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
     testcase{
        int n;
        cin>>n;
        if (n%2==0)
        {
        for ( int i = 2 ; i <= n ; i++)
        {
            cout<<i<<" "<<i-1<<" ";
            i++;
        }
        }
        else
        {
            cout<<"3 1 2 ";
            for ( int i = 5 ; i <=n;i++)
            {
                cout<<i<<" " <<i-1<<" ";
                i++;
            }
        }
        cout<<endl;
    }
    }

