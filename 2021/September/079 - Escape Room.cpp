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
        int u=0,d=0,r=0,l=0;
        testcase
        {
            char h;cin>>h;
            if (h=='U')
            {
                u++;
            }
            else if (h=='D')
            {
                d++;
            }
            else if (h=='R')
            {
                r++;
            }
            else
            {
                l++;
            }
        }
        if (u<10)
        {
            cout<<"12:0"<<u<<endl;
        }
        else
        {
            cout<<"12:"<<u<<endl;
        }
                if (d<10)
        {
            cout<<"06:0"<<d<<endl;
        }
        else
        {
            cout<<"06:"<<d<<endl;
        }
                if (r<10)
        {
            cout<<"03:0"<<r<<endl;
        }
        else
        {
            cout<<"03:"<<r<<endl;
        }
                if (l<10)
        {
            cout<<"09:0"<<l<<endl;
        }
        else
        {
            cout<<"09:"<<l<<endl;
        }

    }
