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
    int n;cin>>n;
    int maxx=0,minn=10000000,maxxx=0,minnn=0;
    for (int i= 1 ; i<=n ; i++)
        {
                int num;
                cin>>num;
                if(num>maxx)
                    {
                    maxxx=i;
                    maxx=num;
                    }
                if(num<=minn)
                {
                    minnn=i;
                    minn=num;
                }
        }
        int bb=n-minnn;
    if(maxxx>minnn)
        {
        cout<<(maxxx-1)+(bb-1);
        }
    else
        {
        cout<<(maxxx-1)+bb;
        }
}

