#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ull unsigned long long
#define pb(x) emplace_back(x)
#define testcase int t ; cin>>t ; while(t--)
#define fx(x) fixed<<setprecision(x)
#define bobo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define arrayn int n;cin>>n;int x[n]; for ( int i = 0 ; i < n ; i++){cin>>x[i];}
    using namespace std ;
    int main (){
        bobo;
        string x;cin>>x;
        string y,z;
        for (int i = 0 ; i < x.size() ; i++)
        {
            if (i!=x.size()-1)
            {
                y+=x[i];
            }
            if (i!=x.size()-2)
            {
                z+=x[i];
            }
        }
        int a = stoi(x);int b = stoi(y);int c = stoi(z);
        cout<<max(a,max(b,c));
    }
