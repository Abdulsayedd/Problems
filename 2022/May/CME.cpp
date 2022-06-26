    #include <bits/stdc++.h>
    #define testcase int t;cin>>t;while(t--)
    #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;
    int main () {
        pre;
        int h,h1,h2;
        testcase {
            cin>>h;
            if(h==2)h1=2;
            else if(h%2==0)h1=0;
            else h1=1;
            cout<<h1<<"\n";
        }
    }