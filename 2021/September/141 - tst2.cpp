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
    int main (){
        bobo;
        /*int n; cin>>n;
        int f=1;
        for(int i = 0 ; i < n ; i++)
        {
            i%2==1?f=0:f=1;
            for(int j = 0 ; j <=i;j++)
            {
                if(i%2==1)
                {
                    if (f==1)
                    {
                        cout<<1<<" ";
                        f=0;
                    }
                    else
                    {
                        cout<<0<<" ";
                        f=1;
                    }
                }
                else
                {
                    if (f==1)
                    {
                        cout<<1<<" ";
                        f=0;
                    }
                    else
                    {
                        cout<<0<<" ";
                        f=1;
                    }

                }
            }
            cout<<endl;
        }
        */
        /*int n ; cin>>n;
        int cnt=1;
        int temp;
        n-=1;
        cin>>temp;
        while(n--)
        {
            int h; cin>>h;
            if(h>temp)
            {
                cout<<cnt+1;return 0;
            }
            else
            {
                temp=h;
                cnt++;
            }
        }
        cout<<0;*/
        /*int n ; cin>>n;

        int kobaya=1,row=1,sum=1,coun=2;
        if(n==1)
        {
            cout<<1;
        }
        else{
        while(kobaya<n)
        {
            row+=coun;//3,6
            coun++;//3,4
            kobaya+=row;//4,10
        }
        cout<<coun-1;
        }*/

        long long n,a;
        cin>>n>>a;
        unsigned long long m=pow(n,a);
        cout<<m;
    }
