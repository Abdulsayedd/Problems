
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
        testcase
        {


            int n ;cin>>n;
            char x[n][n];
            int f=0;
            int frsti,frstj,scndi,scndj;
            for(int i = 0 ; i < n ; i++)
            {
                for(int j = 0 ; j < n ; j++)
                {
                    cin>>x[i][j];
                    if(x[i][j]=='*' && f==0)
                    {
                        frsti=i;
                        frstj=j;
                        f=1;
                    }
                    else if(x[i][j]=='*' && f==1)
                    {
                        scndj=j;
                        scndi=i;
                    }
                }
            }
            if(frsti == scndi || frstj==scndj)
            {
            x[frsti][frstj]='*';
            x[scndi][scndj]='*';
            if(n-frsti > 1 && n-scndi > 1 && frsti == scndi)
            {
            x[frsti+1][frstj]='*';
            x[scndi+1][scndj]='*';
            }
           else if(n-frstj > 1 && n-scndj > 1 && frstj == scndj)
            {
            x[frsti][frstj+1]='*';
            x[scndi][scndj+1]='*';
            }
            else if(frsti >= 1 && scndi >= 1 && frsti == scndi)
            {
            x[frsti-1][frstj]='*';
            x[scndi-1][scndj]='*';
            }
            else if(frstj >= 1 && scndj >= 1 && frstj == scndj)
            {
            x[frsti][frstj-1]='*';
            x[scndi][scndj-1]='*';
            }

            }
            x[frsti][frstj]='*';
            x[scndi][scndj]='*';
            x[scndi][frstj]='*';
            x[frsti][scndj]='*';
            for(int i = 0 ; i < n ; i++)
            {
                for(int j = 0 ; j < n ; j++)
                {
                        cout<<x[i][j];
                }
                cout<<endl;
            }
        }
    }
