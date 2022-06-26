    #include <bits/stdc++.h>
    #define ll long long
    #define endl "\n"
    #define testcase int t ; cin>>t ; while(t--)
    #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;
    int main () {
        pre;
        testcase
        {
            string x;cin>>x;
            bool f=false;int l=0;
            for(char i = 'a'; i <='z' ; i++)
            {
                for(char j = 'a';j<='z';j++)
                {
                    if(i==j)l--;
                    l++;
                    if(x[0]==i && x[1]==j)
                    {
                        cout<<l<<endl;f=true;break;
                    }
                }
                if(f)break;
            }
        };

    }