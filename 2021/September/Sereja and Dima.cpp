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
        int s=0,d=0,turn=0;
        int n;cin>>n;
        list<int>v;
        for(int i = 0 ; i < n ; i++)
        {
            int x;cin>>x;
            v.push_back(x);
        }

        while (v.size()!=0)
        {
            auto st =v.front();
            auto en=v.back();
            if (turn==0)
            {
                if (st>en)
                {
                    s+=st;
                    v.pop_front();
                }
                else
                {
                    s+=en;
                    v.pop_back();
                }
                turn++;
            }
            else
            {
                if (st>en)
                {
                    d+=st;
                    v.pop_front();
                }
                else
                {
                    d+=en;
                    v.pop_back();
                }
                turn--;
            }
        }
        cout<<s<< " "<<d;

    }
