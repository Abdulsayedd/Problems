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
        string x;cin>>x;
        char maxxchar='a';
        map<char,int>v;
        int maxfreq=0;
        int coun=0;
        int c=0;
        for(int i = 0 ; i < x.size() ; i++)
        {
            v[x[i]]++;
        }

        for(auto i = v.begin() ; i != v.end() ; i++)
        {
            maxfreq=max(maxfreq,i->second);
        }
        bool f1=false;
         for(auto i = v.begin() ; i != v.end() ; i++)
        {
           if(i->second == maxfreq)
           {
               coun++;
           }
           if(i->second == 1 && f1==false)
           {
               c++;
               f1=true;
           }
        }
        if(coun+c==v.size())
        {
            cout<<"YES";return 0;
        }
        bool f= true;
        for(auto i = v.begin() ; i != v.end() ; i++)
        {
            if(i->second!=maxfreq)
            {
                f=false;
                break;
            }
        }
        if(f==true)
        {
            cout<<"YES";return 0;
        }
/*        cout<<maxfreq<<endl;*/
        for(auto i = v.begin() ; i != v.end() ; i++)
        {
            i->second-=(maxfreq-1);
        }
        int sum=0;
         for(auto i = v.begin() ; i != v.end() ; i++)
        {
            if(i->second<0)
            {
                cout<<"NO";return 0;
            }
            else
            sum+=i->second;
        }
        if(sum==1)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        /*for(auto i = v.begin() ; i != v.end() ; i++)
        {
            cout<<i->first<<" "<<i->second<<endl;
        }*/


    }
