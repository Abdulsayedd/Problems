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
        /*
        int n;cin>>n;
        map<string,int>m1;
        map<string,int>m2;
        vector<pair<string,string>>v;
        set<pair<string,string>>v1;
        for(int i = 0 ; i < n ; i++)
        {
            string x,y;cin>>x>>y;
            m1[x]++;m2[y]++;
            v.push_back({x,y});
        }
        int j;
        for(int i = 0 ; i< n ; i++)
        {
            bool t=false;
            string m = v[i].second;
            for(j = 0 ; j < n ; j++)
            {
                if(m == v[j].first)
                {
                    v1.insert({v[i].first,v[j].second});
                }
            }

        }
         for(auto it = v1.begin();it!=v1.end();it++)
            {
                cout<<it->first<<" "<<it->second<<endl;
            }
         for(auto it = m2.begin(); it!=m2.end();it++)
         {
             if()
         }*/
         int n;cin>>n;
         string arr1[n],arr2[n];
         vector<pair<string,string>>v;
         map<int,int>m;
         for(int i = 0 ; i < n ; i++)
         {
             cin>>arr1[i]>>arr2[i];
         }
         for(int i = 0 ; i < n ; i++)
         {
             for(int j = 0 ; j < n ; j++)
             {
                 if(arr2[i]==arr1[j])
                 {
                     v.push_back({arr1[i],arr2[j]});
                     m[i]=i;
                     m[j]=j;
                     break;
                 }
             }
         }
         cout<<v.size()+(n-m.size())<<endl;
         if(m.empty())
         {
        for(int i = 0 ; i < n ; i++)
         {
             cout<<arr1[i]<<" "<<arr2[i]<<endl;;
         }
         }
         else
         {
         for(auto it = v.begin();it!=v.end() ;it++)
         {
             cout<<it->first<<" "<<it->second<<endl;
         }
          /*for(auto it = m.begin();it!=m.end() ;it++)
         {
             cout<<it->first<<" "<<it->second<<endl;
         }*/
            for(int i = 0 ; i < n ; i++)
            {
                if(i!=m[i])
                {
                    cout<<arr1[i]<<" "<<arr2[i]<<endl;
                }
            }
         }

}
