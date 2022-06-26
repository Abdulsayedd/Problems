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
    int main ()
    {
        bobo;
            testcase
            {
            /* The Flip Flop
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
            */
            /* La Casa
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
            */
            /* Space Pizza
            int n,p;cin>>n>>p;
            int coun=1;
            while (n>0)
            {
                if(n%2==0){
                n/=2;
                coun*=2;}
                else{break;}
            }
            if (coun>=p)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }*/
            /* Pyramid of Cups
        int n ,copaya=1,row=1,i=1,coun=0;
        cin>>n;
        while(copaya<n)
        {
            i++;
            row+=i;
            copaya+=row;
            coun++;
        }
        cout<<coun+1<<endl;
*/
            /* Jumppad


            ull x1,v1,x2,v2;
            cin>>x1>>v1>>x2>>v2;
            for (int i = 0 ; i < 1e9 ; i++)
            {
                if (x1==x2)
                {
                    cout<<"YES"<<endl;return 0;
                }
                else
                {
                    x1+=v1;
                    x2+=v2;
                }
            }
            cout<<"NO"<<endl;return 0;

        }*/
            /*flip flop easy
        int n,p;cin>>n>>p;
        if (n%2==0 && n-p==1)
        {
            cout<<min((p/2),((n-p)/2)+1)<<endl;
        }
        else
        {
            cout<<min((p/2),((n-p)/2))<<endl;
        }*/
            }
    }
