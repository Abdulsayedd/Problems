
 #include <bits/stdc++.h>
 #include<sstream>
 #include <string>
        #define ll long long
        #define ld long double
        #define ull unsigned long long
        #define pb(x) emplace_back(x)
        #define testcase int t ; cin>>t ; while(t--)
        #define fx(x) fixed<<setprecision(x)
        #define leadz(x) std::setfill('0') << std::setw(x)
        #define bobo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
        #define arrayn int n;cin>>n;int x[n]; for ( int i = 0 ; i < n ; i++){cin>>x[i];}
    using namespace std ;
//===================
    ull factorial(ull n)
{
    if (n == 0)
        return 1;
        else
    return n * factorial(n - 1);
}
    int main (){
        bobo;
            int strt,endd,k,coun=0,m=0;
            cin>>strt>>endd>>k;
            for(int i = strt ; i<=endd;i++)
            {
                string m = to_string(i);
                string m1 = m;
                reverse(m.begin(),m.end());
                double num = abs(stoi(m)-stoi(m1));
                double num1 = num/k;
                int num2=num1;
                if (num1-num2>0)
                {
                    m+=1;
                }
                else
                {
                    coun++;
                }
            }
            cout<<coun;
    }
