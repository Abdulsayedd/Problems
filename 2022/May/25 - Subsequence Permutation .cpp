    #include <bits/stdc++.h>
    #define ll long long
    //#define endl "\n"
    #define testcase int t ; cin>>t ; while(t--)
    #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;
    int main () {
        pre;
        testcase
        {
            int n;cin>>n;
            string x,y;cin>>x;
            y=x;
            sort(x.begin(),x.end());
            int sum=0;
            for(int i = 0 ; i < n ; i++)
            {
                if(x[i]!=y[i])sum++;
            }
            cout<<sum<<endl;
        };

    }