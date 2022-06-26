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
        for(int i = 2; i <= num / 2; i++){
           if(num % i == 0)
    {flag = false;break;}
    }return flag;
        }
        string decToHexa(int n)
    {
            string s; char c[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
            while(n)
            {s+= (char)c[n%16];n/=16;}
            reverse(s.begin(),s.end());return s;
    }
    //================= بسم الله =================\\

        int main (){
            bobo;
            int n,q;cin>>n>>q;
            string x;cin>>x;
            while(q--)
            {
                string y;cin>>y;
                if(y=="substr" || y=="sort" || y=="reverse")
                {
                    int n1,n2;
                    cin>>n1>>n2;
                    if(n1>n2)
                    {
                        swap(n1,n2);
                    }
                    if(y=="substr")
                    {
                        cout<<x.substr(n1-1,n2-n1+1)<<endl;
                    }
                    else if (y=="sort")
                    {
                        sort(x.begin()+n1-1,x.begin()+n2);
                    }
                    else if(y=="reverse")
                    {
                        reverse(x.begin()+n1-1,x.begin()+n2);
                    }
                }
                else if (y=="push_back")
                {
                    char ch;cin>>ch;
                    x+=ch;
                }
                else if (y=="print")
                {
                    int n1;cin>>n1;
                    cout<<x[n1-1]<<endl;
                }
                else
                {
                    if(y=="pop_back")
                    {
                        x.pop_back();
                    }
                    else if (y=="front")
                    {
                        cout<<x[0]<<endl;
                    }
                    else if(y=="back")
                    {
                        cout<<x[x.size()-1]<<endl;
                    }
                }

            }

        }
