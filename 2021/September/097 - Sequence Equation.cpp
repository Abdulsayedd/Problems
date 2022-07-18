
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
        arrayn;
        int v[n];
        int counter=0;
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = 0 ;j < n ; j++)
            {
                if(i==x[j])
                {
                    v[counter]=j+1;
                    counter++;
                }
            }
        }
        for(int i = 0 ; i < n ; i++)
        {
        for(int j = 0 ; j < n ; j++)
        {
            if(v[i]==x[j])
            {
                cout<<j+1<<endl;
            }
        }
        }
    }
