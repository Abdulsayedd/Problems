    #include <bits/stdc++.h>
    #define ll long long
    //#define endl "\n"
    #define testcase int t ; cin>>t ; while(t--)
    #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;
    int main () {
        pre;
            int n;cin>>n;
            int h,x=0;
            while(true)
            {
                h = n ;
                while(h)
                {
                    x+=h%10;
                    h/=10;
                }
                if(x%4==0)
                {
                    cout<<n<<endl;
                    break;
                }
                else x=0,n++;
            }
    }