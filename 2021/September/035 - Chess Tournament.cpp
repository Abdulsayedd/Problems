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
            int n,coun1=0,coun2=0;
            cin>>n;
            string x;
            cin>>x;
            for (int i = 0 ; i < n ; i ++)
            {
                if (x[i]=='1')
                {
                    coun1++;
                }
                else
                {
                    coun2++;
                }
            }
            if (coun1>=coun2 && coun2>0)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
                char arr[n][n];
                bool b=false;
                arr[0][0]='X';
                for (int i = 1 ; i < n ; i ++)
                {
                    if (x[0]=='2' && x[i]=='1')
                    {
                        arr[0][i]='-';
                    }
                    else if (x[0]=='1' && x[i]=='1')
                    {
                        arr[0][i]='=';
                    }
                    else if (x[0]=='1' && x[i]=='2')
                    {
                        arr[0][i]='+';
                    }
                    else if (b=false && x[0]=='2' && x[i]=='2')
                    {
                        arr[0][i]='+';
                        b=true;
                    }
                    else if (b=true && x[0]=='2' && x[i]=='2')
                    {
                        arr[0][i]='-';
                    }
                }
                for(int i = 1 ; i < n ; i ++)
                {
                    for(int j = 0 ; j < n ; j++)
                    {
                        if (i==j)
                        {
                            arr[i][j]=='X';
                            continue;
                        }
                        if (arr[j][0]=='-')
                        {
                            arr[i][j]='+';
                        }
                        else if (arr[j][0]=='+')
                        {
                            arr[i][j]='-';
                        }
                    }
                }
                for(int i = 0 ; i < n ; i ++)
                {
                    for(int j = 0 ; j < n ; j++)
                    {
                        cout<<arr[i][j]<<" ";
                    }
                    cout<<endl;
                {

        }

    }
    }}
    }
