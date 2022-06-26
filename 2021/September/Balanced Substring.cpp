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
        #define bobo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
        #define arrayn int n;cin>>n;int x[n]; for ( int i = 0 ; i < n ; i++){cin>>x[i];}
    using namespace std ;
    int main (){
        bobo;
         testcase
        {
            int n,a=0,sumlft=0,sumrit=0;
            cin>>n;
            string x;
            cin>>x;
            for(int i=0 ; i<n ; i++)
            {
                int counl=0,counr=0 ;
                if(x[i]=='a')
                {counl++;}
                else{counr++;}
                if(a==1)
                {
                    break;
                }
                for(int j = i+1 ; j<n;j++)
                {
                 if(x[j]=='a')
                 {
                     counl++;
                 }
                 else
                 {
                     counr++;
                 }
                 if(counl==counr)
                 {
                     a=1;
                     sumlft=i+1;
                     sumrit=j+1;
                     break;
                 }
                }

        }
        if(sumlft==0 && sumrit==0)
        {
            cout<<-1<<" "<<-1<<endl;
        }
        else
        cout<<sumlft<<" "<<sumrit<<endl;



    }
}

