    #include <bits/stdc++.h>
    #define ll long long
   // #define endl "\n"
    #define testcase int t ; cin>>t ; while(t--)
    #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;
    int main () {
        pre;
        testcase {
            ll n,c,cc;cin>>n;
            string x;cin>>x;
            cc=0;
            c=0;
            for(int i = 0 ; i <x.size();i++)
            {
                if(x[i]==x[i+1])c++;
                else
                {
                    c++;
                    if(c%2==0)c=0;
                    else cc++,i++,c=0;
                }
            }
            cout<<cc<<endl;
        }
    }