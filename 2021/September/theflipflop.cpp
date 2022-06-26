/*ما الفضلُ إِلا لأهلِ العلمِ إِنهمُ  *  على الهُدى لمن استهدى أدلاءُ

وقيمةُ المرءِ ما قد كان يحسِنُهُ  *  والجاهِلونَ لأهل العلمِ أعداءُ

فقمْ بعلمٍ ولا تطلبْ به بدلا  *  فالناسُ مَوْتى وأهلُ العلمِ أحياءُ
*/
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
        testcase
        {
            int n ,p,counl=0,counr=0,str=0,endd=0;cin>>n>>p;
            if(p==1)
            {
                cout<<0<<endl;
            }
            else if (n%2==0 && n-p==1)
            {
                cout<<1<<endl;
            }
            else
            {
                for(int i =2 ; i <= p ; i++)
                {
                    i++;
                    counl++;
                }
                if(n%2==0)
                {
                    for(int i = n-1 ; i >= p ; i--)
                    {
                        i--;
                        counr++;
                    }
                    if(p%2==1)
                    {
                        counr=counr-1;
                    }
                }
                else
                {
                    for(int i = n-2 ; i >= p ; i--)
                    {
                        i--;
                        counr++;
                    }
                }
                            cout<<min(counr,counl)<<endl;
            }
        }

    }
