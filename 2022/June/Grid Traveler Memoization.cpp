        #include <bits/stdc++.h>
        #define testcase int t;cin>>t;while(t--)
        #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
        using namespace std ;
        unsigned long long travel(int n,int m,map<string,unsigned long long>&mp)
        {
            string x = to_string(n)+','+ to_string(m);
            if(mp[x])return mp[x];
            if(n==1 && m==1)return 1;
            if(!n || !m)return 0;
            mp[x]=travel(n-1,m,mp)+travel(n,m-1,mp);
            return mp[x];
        }
        int main ()
        {
            pre;
            map<string,unsigned long long>mp;
            cout<<travel(1,4,mp)<<"\n";
            cout<<travel(4,13,mp)<<"\n";
            cout<<travel(18,18,mp)<<"\n";
            cout<<travel(2,4,mp)<<"\n";

        }