
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
        #define tstv1 for(int i = 0 ; i < v1.size(); i++){cout<<v1[i]<<" ";}
	#define fnd(v,u) bool hh = v.find(u) != v.end();
    using namespace std ;


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

    string lexo(string x)
    {
    if(next_permutation(x.begin(),x.end()))
    {return x.c_str();}
    else
    {return "no answer";}
    }
    bool bigsort(string a, string b){
    return a.length() == b.length() ? a < b : a.length() < b.length();
    }

    int main (){
        bobo;
        int n,q;
        cin>>n>>q;

    vector<vector<int>>v(n);

    for (int i = 0; i < n; i++)
    {
        int length;
        cin >> length;
        v[i].resize(length);
        for(int j = 0; j < length; j++)
        {
            cin >>v[i][j];
        }
    }

    for (int k = 0; k < q; k++)
    {
        int x,y;
        cin>>x>>y;
        cout << v[x][y]<<endl;
    }

    }
