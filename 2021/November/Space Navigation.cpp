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
        testcase
        {
            int n,m;//destination position
            cin>>n>>m;
            int n1,m1;//current position
            //int tst=0;//testing 2
            string x;cin>>x;//string of moves
            int u=0,d=0,r=0,l=0;//moves
            for(int i = 0 ; i < x.size() ; i++)
            {
                if(x[i]=='U')
                u++;
                if(x[i]=='D')
                d++;
                if(x[i]=='R')
                r++;
                if(x[i]=='L')
                l++;
            }
            if(n>0)
            {
                if(m>0)
                {
                    if(u>=m && r>=n)
                    {
                        cout<<"YES"<<endl;
                    }
                    else
                    {
                        cout<<"NO"<<endl;
                    }
                }
                else
                {
                    if(d>=abs(m) && r>=n)
                    {
                        cout<<"YES"<<endl;
                    }
                   else
                    {
                        cout<<"NO"<<endl;
                    }
                }
            }
            else if(n<0)
            {
                if(m>0)
                {
                    if(u>=m && l>=abs(n))
                    {
                        cout<<"YES"<<endl;
                    }
                    else
                    {
                        cout<<"NO"<<endl;
                    }
                }
                else
                {
                    if(d>=abs(m) && l>=abs(n))
                    {
                        cout<<"YES"<<endl;
                    }
                   else
                    {
                        cout<<"NO"<<endl;
                    }
                }
            }
            else
            {
                if(n==0 && m>0)
                {
                    if(u>=m)
                    {
                        cout<<"YES"<<endl;
                    }
                    else
                    {
                        cout<<"NO"<<endl;
                    }
                }
                 if(n==0 && m<0)
                {
                    if(d>=abs(m))
                    {
                        cout<<"YES"<<endl;
                    }
                    else
                    {
                        cout<<"NO"<<endl;
                    }
                }
                    if(m==0 && n>0)
                {
                    if(r>=n)
                    {
                        cout<<"YES"<<endl;
                    }
                    else
                    {
                        cout<<"NO"<<endl;
                    }
                }
                 if(m==0 && n<0)
                {
                    if(l>=abs(n))
                    {
                        cout<<"YES"<<endl;
                    }
                    else
                    {
                        cout<<"NO"<<endl;
                    }
                }
            }



    }}
