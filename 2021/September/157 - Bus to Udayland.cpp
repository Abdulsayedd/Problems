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
        int f=0;
        int n;cin>>n;
        string x,y;
        for(int i = 0 ; i < n ; i++)
        {
            cin>>x;
            y+=x;
        }
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = i*5 ; j < (i+1)*5 ; j++)
            {
                if((f==0 && y[j]=='O'&& y[j+1]=='O' && y[j+2]=='|'))
                {
                    y[j]='+';
                    y[j+1]='+';
                    f=1;
                }
                if (f==0 && y[j]=='|'&& y[j+1]=='O' && y[j+2]=='O')
                {
                    y[j+1]='+';
                    y[j+2]='+';
                    f=1;
                }
            }
        }
        if(f==0)
        {
            cout<<"NO";return 0;
        }
        else
        {
            cout<<"YES"<<endl;
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = i*5 ; j < (i+1)*5 ; j++)
            {
                cout<<y[j];
            }
            cout<<endl;
        }
        }

    }
