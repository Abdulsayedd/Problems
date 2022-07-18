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
    int a,n;
    cin>>a>>n;
    int x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    sort(x,x+n);
    int minn = x[a-1] - x[0];
    for (int i = 1; i <= n - a; i++)
    {
        if (x[i+a-1] - x[i] < minn)
        {
            minn = x[i+a-1] - x[i];
        }
    }
    cout<<minn<<endl;
}


