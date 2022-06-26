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
        ll power[30];
        for(int i = 0 ; i < 30; i++)
        {
            power[i]=pow(2,i+1);
        }
        testcase
        {
        int n;cin>>n;
        if (n==2)
        {
            cout<<2<<endl;
        }
        else{
        int coun=0;
        coun=abs((power[n-1]+power[0])-(power[n-2]+power[1]));
        cout<<coun<<endl;}
        }
    }
