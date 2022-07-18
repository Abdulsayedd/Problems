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
        ll n;cin>>n;
        ll arr[n],arr_p[n+9]{0},s_arr_p[n+9]{0};
        for(ll i = 0 ; i < n ; i++)
        {
            cin>>arr[i];
            arr_p[i+1]=arr_p[i]+arr[i];
        }
        sort(arr,arr+n);
        for(ll i = 0 ; i<n ; i++)
        {
            s_arr_p[i+1]=s_arr_p[i]+arr[i];
        }
       /* for(int i = 0 ; i <= n ; i++)
        {
            cout<<arr_p[i]<<" ";
        }*/
        /* for(int i = 0 ; i <= n ; i++)
        {
            cout<<s_arr_p[i]<<" ";
        }*/
        ll q;cin>>q;
        while(q--)
        {
            ll h,h1,h2;
            cin>>h>>h1>>h2;
            if(h==1)
                {
                cout<<arr_p[h2]-arr_p[h1-1]<<endl;
                continue;
                }

                cout<<s_arr_p[h2]-s_arr_p[h1-1]<<endl;
        }


    }
