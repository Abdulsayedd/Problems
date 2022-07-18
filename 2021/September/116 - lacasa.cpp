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
            ll coun1=0,coun2=0;
            ll n;cin>>n;
            ll m=n;
            while(n-3>0)
            {
                coun1++;
                coun2++;
                n-=3;
            }
            if((coun1+1)*1+(coun2+1)*2==m)
            {
                cout<<coun1+1<<" "<<coun2+1<<endl;
            }
            else if(coun1+(coun2+1)*2==m)
            {
                cout<<coun1<<" "<<coun2+1<<endl;
            }
            else if((coun1+1)*1+coun2*2==m)
            {
                cout<<coun1+1<<" "<<coun2<<endl;
            }

        }

    }
