
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
        int n,k,coun=0,c=1;cin>>n>>k;
        int x[n];
        for(int i = 0 ; i < n ; i++)
        {
            cin>>x[i];
        }
        for(int i = 0 ; i < n ; i++)
        {
            int h = k;
            for(int j = 1 ; j <= x[i]; j++)
            {
                if(h==0)
                {
                    c++;//2
                    h=k;//3
                }
                if(j==c)
                {
                    coun++;
                }
                //cout<<" j = "<< j << " c = " << c<<endl;
                h--;
            }
            c++;
        }
        cout<<coun;

    }
