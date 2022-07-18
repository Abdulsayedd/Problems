//================= سكيب ذيس =================\\

 #include <bits/stdc++.h>
        #define ll long long
        #define ld long double
        #define ull unsigned long long
        #define pb(x) push_back(x)
        #define testcase int t ; cin>>t ; while(t--)
        #define fx(x) fixed<<setprecision(x)
        #define leadz(x) std::setfill('0') << std::setw(x)
        #define bobo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
        #define arrayn int n;cin>>n;int x[n]; for ( int i = 0 ; i < n ; i++){cin>>x[i];}
        #define tstv for(int i = 0 ; i < v.size(); i++){cout<<v[i]<<" ";}
	#define fnd(v,u) bool hh = v.find(u) != v.end();
    using namespace std ;
//================= سكيب ذيس =================\\

    ull factorial(ull n)
        {if (n == 0)
        return 1;
        else
        return n * factorial(n - 1);}

    int gcd(int a,int b)
    {if(b==0)return a;
    else return gcd(b,a%b);}

    int lcm(int a,int b)
    {return a*b/gcd(a,b);}
//================= بسم الله =================\\

    int main (){
        bobo;
    int n,m,f=0,vv=0,mm=0;
    cin>>n>>m;
    int x[n][m]{0};
    int maxx=max(n,m);//m=8
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m; j++)
        {
            cin>>x[i][j];
        }
    }
    for(int i = 0 ; i < maxx ; i++)
    {
        for(int j = maxx ; j >maxx-i ; j--)
        {
            cout<<" ";
        }
        for(int j = i ; j < maxx; j++)
        {
            if(i>=n || j>=m)
            {
                cout<<0<<" ";
            }
            else{
            cout<<x[i][j]<<" ";}
        }
        cout<<endl;
    }
    /*for(int i = max(n,m)-1 ; i >=0 ; i--)
    {
        for(int j = 0 ; j < n-i ; j++)
        {
            cout<<" ";
        }
        for(int j = 0 ; j < 2*i-1 ; j++)
        {
            if(vv==n*m)
               {
                   cout<<v[vv]<<" ";
               }
                else
                {cout<<v[vv]<<" ";vv++;}

        }
        cout<<endl;
    }*/

    }
