    #include <bits/stdc++.h>
    #define bobo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;
    int main ()
    {
        bobo;
        int t;
        cin>>t;
        while(t--)
            {
            unsigned long long n;
            cin>>n;
            vector<unsigned long long>v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        long long ans=1000000005;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                for(int k=0;k<=j-i;k++){
                    v[i+k]=(v[i+k]&v[j-k]);
                }
                long long x=*max_element(v.begin(),v.end());
                ans=min(ans,x);
            }
        }
        cout<<ans<<endl;
    }
    }
