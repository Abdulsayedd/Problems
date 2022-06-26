#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    int t;cin>>t;
    while(t--)
    {
        string x;cin>>x;
        int n=0;
        bool f;
        while(true)
        {
            f=false;
            for(int i = 0 ; i < x.size()-1 ; i++)
            {
                if(x[i]==x[i+1] && n==0)
                {
                    n=1; x.erase(i,2); f=true; i=0;
                    if(x==""){f=false;break;}
                }
                else if(x[i]==x[i+1] && n==1)
                {
                    n=0; x.erase(i,2); f=true; i=0;
                    if(x==""){f=false;break;}
                }
            }
            if(!f)break;
        }
            if(n!=0)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
    }
}