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
            string x;cin>>x;
            int b=0,a=0;
            bool f=true;
            if(x[x.size()-1]=='A')f=false;
            for(int i = 0 ; i < x.size();i++)
            {
                if(x[i]=='A')a++;
                else if (x[i]=='B') b++;

                if(b>a){f=false;break;}
            }
            cout<< (f? "YES": "NO")<<endl;
        };
    }