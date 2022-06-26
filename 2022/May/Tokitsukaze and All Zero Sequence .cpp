    #include <bits/stdc++.h>
    #define ll long long
   // #define endl "\n"
    #define testcase int t ; cin>>t ; while(t--)
    #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;
    int main () {
        pre;
        testcase {
           int n,m,h,z=0,c=0;cin>>n;
           m=n;
           map<int,int>mp;
           while(m--)
           {
               cin>>h;
               if(!h)z++;
               else mp[h]++;
           }
           for(auto i : mp)if(i.second>1)c++;
           if(z) {cout<<n-z<<endl;continue;}
           if(!z && c){cout<<n<<endl;continue;}
           else {cout<<n+1<<endl;continue;}
        }
    }