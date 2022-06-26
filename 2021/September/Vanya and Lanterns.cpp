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
        ll n,l;
        cin>>n>>l;
        ld x[n];
        vector<ld>v;
        for ( ll i = 0 ; i < n ; i ++)
        {
            cin>>x[i];
        }
        sort(x,x+n);
        ld minn=0,minn2=abs(0-x[0]);
        for ( int i = 0 ; i < n-1 ; i++)
        {
            minn=abs(x[i]-x[i+1]);
            v.pb(minn);
        }
       /* for ( int i = 0 ; i < n ; i ++)
        {
            cout<<v[i]<<" ";
        } */
        cout<<endl;
        ld maxx=*max_element(v.begin(),v.end());
        if(x[0]!=0)
        {
         if (maxx/2>minn2)
        {
            if (x[n-1]!=l)
            {
             cout<<fx(10)<<(maxx/2)+(l-x[n-1]);
            }
            else
            {
                            cout<<fx(10)<<maxx/2;
            }
        }
        else
        {
            if (x[n-1]!=l)
            {
             cout<<fx(10)<<(maxx/2)+(l-x[n-1]);
            }
            else
            {cout<<fx(10)<<minn2;}
        }
        }
        else
        {
            if (x[n-1]!=l)
            {
             cout<<fx(10)<<(maxx/2)+(l-x[n-1]);
            }
            else
            {
            cout<<fx(10)<<maxx/2;
        }


    }
    }
