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
        char x[3][3];
        for(int i = 0 ; i < 3 ; i++)
        {
            for(int j = 0 ; j < 3 ; j++)
            {
                            cin>>x[i][j];
            }
        }
        if (x[0][0]==x[1][1] && x[0][0]==x[2][2])
        {
            cout<<"Player "<<x[0][0]<<" won diagonal";
        }
        else if (x[0][2]==x[1][1] && x[0][2]==x[2][0])
        {
            cout<<"Player "<<x[0][2]<<" won diagonal";
        }
        else if (x[0][0]==x[0][1] && x[0][0]==x[0][2])
        {
            cout<<"Player "<<x[0][0]<<" won horizontal";
        }
        else if (x[1][0]==x[1][1] && x[1][0]==x[1][2])
        {
            cout<<"Player "<<x[1][1]<<" won horizontal";
        }
        else if (x[2][0]==x[2][1] && x[2][0]==x[2][2])
        {
            cout<<"Player "<<x[2][1]<<" won horizontal";
        }
        else if (x[0][2]==x[2][2] && x[0][2]==x[1][2])
        {
            cout<<"Player "<<x[0][2]<<" won horizontal";
        }
        else if (x[0][1]==x[1][1] && x[0][1]==x[2][1])
        {
            cout<<"Player "<<x[2][1]<<" won horizontal";
        }
        else if (x[0][2]==x[0][1] && x[0][2]==x[2][2])
        {
            cout<<"Player "<<x[2][2]<<" won horizontal";
        }
        else
        {
            cout<<"No winner";
        }
    }
