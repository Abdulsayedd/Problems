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
    using namespace std ;
    int main (){
        bobo;
        testcase
        {
            int a,b,coun=0;
            cin>>a>>b;
            coun=abs(a-b);
            if (coun%2==0)
            {
                if (a<b)
                {
                    cout<<2<<endl;
                }
                else if (a>b)
                {
                    cout<<1<<endl;
                }
                else
                {
                    cout<<0<<endl;
                }
            }
            else
            {
                if (a<b)
                {
                    cout<<1<<endl;
                }
                else if (a>b)
                {
                    cout<<2<<endl;
                }
                else
                {
                    cout<<0<<endl;
                }
            }
        }
    }
