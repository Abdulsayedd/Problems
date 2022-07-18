    #include <bits/stdc++.h>
    #define super ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    #define ll long long
    #define ld long double
    #define ull unsigned long long
    #define pb(x) push_back(x)
    #define testcase int t ; cin>>t ; while(t--)
    #define fx(x) fixed<<setprecision(x)
    #define bobo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main (){
 bobo;
 ll G,A,Y,sum=0;
 string x;
 cin>>G>>A>>Y;
 cin>>x;
        sum=G*4;sum=sum+(A*3);sum=sum-(Y);
        if (x=="Captain")
        {
            cout<<sum*2<<endl;
        }
        else
        {
            cout<<sum<<endl;
        }
}
