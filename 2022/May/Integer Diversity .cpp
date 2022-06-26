    #include <bits/stdc++.h>

#define testcase int t;cin>>t;while(t--)
    #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;
    int main () {
        pre;
        testcase
        {
            int n,h,c=0;cin>>n;
            map<int,int>mp;
            for(int i = 0 ; i < n ;i++)
            {
                cin>>h;
                h=abs(h);
                if(h==0)mp[h]=0;
                mp[h]++;
            }
            for(auto i : mp)
            {
                i.second>1?c+=2:c++;
            }
            cout<<c<<endl;
        };

    }