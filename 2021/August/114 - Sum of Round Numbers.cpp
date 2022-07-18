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
        testcase
        {
            vector<int>v;
            int n;cin>>n;
            int num=n;
            if (n%10!=0)
            {
                v.pb(n%10);
            }
            int coun = n%10;
            n-=coun;

            if(n%100!=0)
            {
                v.pb(n%100);
            }
            coun=n%100;
            n-=coun;
            if(n%1000!=0)
            {
                v.pb(n%1000);
            }
            coun=n%1000;

            n-=coun;

            if(n%10000!=0)
            {
                v.pb(n%10000);
            }

            if(n>=10000 && n%10000==0)
            {
                v.pb(n);
            }
            cout<<v.size()<<endl;

            for(int i=v.size()-1; i>=0; i--)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
            }
}
