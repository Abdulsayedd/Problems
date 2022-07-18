
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
        string x;getline(cin,x);
        x.erase(std::remove(x.begin(), x.end(),' '), x.end());
        int n=x.size();
        int colmn=ceil(sqrt(n)),row=floor(sqrt(n));
        for(int i = 0 ; i < colmn ; i++)
        {
            for(int j = i ; j < row*colmn+row ; j+=row+1)
            {
                cout<<x[j];
            }
            cout<<" ";
        }
    }
