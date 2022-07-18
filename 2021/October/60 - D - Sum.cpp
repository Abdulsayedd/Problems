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
    bool isPrime(int num)
    {
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
    }
//================= بسم الله =================\\

    int main (){
        bobo;
        string x;
        cin>>x;
        vector<int>v;
        string y;
        for(int i = 0 ; i < x.size()+1 ; i++)
        {
            if(isdigit(x[i]))
            {
                y+=x[i];
                for(int j = i+1 ; j < x.size()+1 ;j++)
                {
                    if(isdigit(x[j]))
                    {
                        y+=x[j];
                    }
                    else
                    {
                        stringstream h1(y);
                        int h =0 ;
                        h1>>h;
                        v.pb(h);
                        y.clear();
                        i=j;
                    }
                }
            }
        }
        ll sum=0;
        for(int i = 0 ; i < v.size() ;i++)
        {
            sum+=v[i];
        }
        cout<<sum;
    }
