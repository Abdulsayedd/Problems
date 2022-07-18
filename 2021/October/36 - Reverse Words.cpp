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
        #define tstv1 for(int i = 0 ; i < v1.size(); i++){cout<<v1[i]<<" ";}
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
//================= بسم الله =================\\

    int main (){
        bobo;
        vector<string>v;
        string x;
        getline(cin,x);
        int vv=0;
        string m;
        for(int i =0 ;i< x.size() ; i++)
        {
            if(x[i]==' ' || i == x.size() -1)
            {
                m=x.substr(vv,i-vv+1);
                v.pb(m);
                vv=i+1;
            }
        }
        for(auto it = v.begin(); it!=v.end();it++)
        {
            if(it!=v.end()-1)
            {
            string mx = *it;
            mx.pop_back();
            reverse(mx.begin(),mx.end());
            cout<<mx<<" ";
            }
            else
            {
            string mx = *it;

            reverse(mx.begin(),mx.end());
            cout<<mx;
            }

        }


    }
