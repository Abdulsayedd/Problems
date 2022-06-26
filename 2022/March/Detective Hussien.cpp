#include <bits/stdc++.h>
        #define ll long long
        #define ld long double
        #define ull unsigned long long
        #define pb(x) push_back(x)
        #define endl "\n"
        #define testcase int t ; cin>>t ; while(t--)
        #define fx(x) fixed<<setprecision(x)
        #define leadz(x) std::setfill('0') << std::setw(x)
        #define bobo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
        #define arrayn int n;cin>>n;int x[n]; for ( int i = 0 ; i < n ; i++){cin>>x[i];}
        #define tstv for(int i = 0 ; i < v.size(); i++){cout<<v[i]<<" ";}
        #define tstv1 for(int i = 0 ; i < v1.size(); i++){cout<<v1[i]<<" ";}
	#define fnd(v,u) bool hh = v.find(u) != v.end();
//=======================================================
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
//=======================================================
    int main (){
        bobo;
        int n,m;
        cin>>n;
        string define1="",mat1="",read1="",print1="";
        while(n--)
        {
            string x;cin>>x;
            if(x=="define")
            {
                char h;cin>>h;
                define1+=h;
            }
            else if(x=="read")
            {
                char h;cin>>h;
                read1+=h;
            }
            else if(x=="print")
            {
                char h;cin>>h;
                print1+=h;
            }
            else
            {
                for(int i = 0 ; i < x.size() ; i++)
                {
                    if(x[i]!=43 && x[i]!=61)
                    {
                        mat1+=x[i];
                    }
                }
            }
        }
        string txt1 =define1+read1+print1+mat1;
        //cout<<txt1<<endl;
        cin>>m;
        string define2="",mat2="",read2="",print2="";
        while(m--)
        {
            string x;cin>>x;
            if(x=="define")
            {
                char h;cin>>h;
                define2+=h;
            }
            else if(x=="read")
            {
                char h;cin>>h;
                read2+=h;
            }
            else if(x=="print")
            {
                char h;cin>>h;
                print2+=h;
            }
            else
            {
                for(int i = 0 ; i < x.size() ; i++)
                {
                    if(x[i]!=43 && x[i]!=61)
                    {
                        mat2+=x[i];
                    }
                }
            }
        }
        string txt2 =define2+read2+print2+mat2;
        //cout<<txt2<<endl;
        if(txt1.size()!=txt2.size())
        {
            cout<<"NO";return 0;
        }
       /* vector<pair<char,char>>v;
        for(int i = 0 ; i < txt1.size();i++)
        {
            v.push_back({txt1[i],txt2[i]});
        }
        sort(v.begin(),v.end());
        map<char,int>m1;
        map<char,int>m2;
        for(auto it = v.begin(); it!=v.end() ; it++)
        {
            m1[it->first]++;
            m2[it->second]++;
        }
        for(auto it = m1.begin(); it!=m1.end() ; it++)
        {
            cout<<it->first<<" " << it->second<<endl;
        }
        for(auto it = m2.begin(); it!=m2.end() ; it++)
        {
            cout<<it->first<<" " << it->second<<endl;
        }
        char ns;
        for(ns='a' ; ns<='z';ns++)
        {
            if(m1[ns]!=0&&m2[ns]!=0)
            {
                    cout<<"NO";return 0;
            }
        }
        cout<<"YES";*/


        set<pair<char,char>>s;
        for(int i = 0 ; i < txt1.size(); i++)
        {
            s.insert({txt1[i],txt2[i]});
        }
        char h;
        for(auto i : s)
        {
            if(h==i.first)
            {
                cout<<"NO"; return 0;
            }
            h = i.first;
        }
        cout<<"YES";
}
