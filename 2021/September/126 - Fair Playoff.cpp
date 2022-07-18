//=================سكيب ذيس=================
 #include <bits/stdc++.h>
        #define ll long long
        #define ld long double
        #define ull unsigned long long
        #define pb(x) emplace_back(x)
        #define testcase int t ; cin>>t ; while(t--)
        #define fx(x) fixed<<setprecision(x)
        #define leadz(x) std::setfill('0') << std::setw(x)
        #define bobo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
        #define arrayn int n;cin>>n;int x[n]; for ( int i = 0 ; i < n ; i++){cin>>x[i];}
        #define tstv for(int i = 0 ; i < v.size(); i++){cout<<v[i]<<" ";}
	#define fnd(v,u) bool hh = v.find(u) != v.end();
    using namespace std ;
//=================سكيب ذيس=================
    ull factorial(ull n)
{
    if (n == 0)
        return 1;
        else
    return n * factorial(n - 1);
}
//=================بسم الله=================
    int main (){
        bobo;
        ull coun=0,sum=0;
        testcase
        {
            int p1,p2,p3,p4,maxx1,maxx2;cin>>p1>>p2>>p3>>p4;
            int x[4];
            maxx1=max(p1,p2);
            maxx2=max(p3,p4);
            x[0]=p1;x[1]=p2;x[2]=p3;x[3]=p4;
            sort(x,x+4);
            if((maxx1==x[3] && maxx2==x[2]) ||(maxx1==x[2] && maxx2==x[3]) )
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }

    }
