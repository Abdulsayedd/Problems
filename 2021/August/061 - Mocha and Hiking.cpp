#include <bits/stdc++.h>
#define bobo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main (){
    bobo;
    int t ;
    cin>>t;
    while(t--)
    {
            int f=0;
            int n,coun=1;
            cin>>n;
            int n1=n+1;
            vector<int>v;
            for ( int i = 0 ; i < n ; i++)
            {
                int num;
                cin>>num;
                if (num==0)
                {
                    if (f==1)
                    {
                    v.push_back(coun);
                    coun++;
                    }
                    else
                    {
                    v.push_back(coun);
                    coun++;
                    v.push_back(n1);
                    f=1;
                    }
                }
                else
                {
                    if (f==1)
                    {
                        v.push_back(coun);
                        coun++;
                    }
                    else
                    {
                    v.push_back(n1);
                    f=1;
                    v.push_back(coun);
                    coun++;
                    }
                }
            }
            for (auto it=v.begin();it!=v.end();it++)
            {cout<<*it<<" ";}
            cout<<endl;v.clear();}
}
