    #include <bits/stdc++.h>
    #define ll long long
   // #define endl "\n"
    #define testcase int t ; cin>>t ; while(t--)
    #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;
    int main () {
        pre;
        testcase
        {
           string x,y;
           cin>>x;
           cin>>y;
           int xa=x.size(),ya=0;
           for(int i = 0 ; i < y.size() ; i++)
           {
               if(y[i]=='a')ya++;
           }
           if(y.size()==1 && y[0]=='a')cout<<1<<endl;
           else
           {
               if(ya>0 && y.size()>1)cout<<-1<<endl;
               else
               {
                    if(y.size()==1 && x.size()==1 && x!=y)
                    {
                        cout<<2<<endl;
                    }
                    else
                    {
                        unsigned ll m1=pow(2,x.size());
                        cout<<m1<<endl;
                    }
               }
           }
        };

    }