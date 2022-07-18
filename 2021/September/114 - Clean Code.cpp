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
        #define tstv for(int i = 0 ; i < v.size(); i++){cout<<v[i]<<endl;}

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
        vector<string>v;
        for(int i = 0 ; i < 1e7 ; i++)
        {
            string x;
            getline(cin,x);
            if(x[0]==47&& x[1]==47)
            {
                continue;
            }
            if(x[0]== 47 && x[1]==42)
            {
                for(int j = 0 ; j < 1e7 ; j++)
                {
                    string x;
                    getline(cin,x);
                    if(x[0]==42&& x[1]==47)
                    {
                        break;
                    }
                }
                continue;
            }



            v.pb(x);
            if (x=="}")
            {
                break;
            }
        }
        tstv;

    }
