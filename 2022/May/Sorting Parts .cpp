    #include <bits/stdc++.h>

#define testcase int t;cin>>t;while(t--)
    #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;
    int main () {
        pre;
        testcase
        {
            int n;cin>>n;
            vector<int>v(n);
            for(int i = 0 ; i < n ; i++)cin>>v[i];
            is_sorted(v.begin(),v.end())?cout<<"NO"<<endl:cout<<"YES"<<endl;
        };

    }