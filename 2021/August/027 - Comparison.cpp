#include <bits/stdc++.h>
using namespace std ;
int main ()
        {
            long long x,y;
            char s;
            cin>>x>>s>>y;
            if(s=='>')
            {
                if(x>y)
                {
                    cout<<"Right"<<endl;
                }
                else
                {
                    cout<<"Wrong"<<endl;
                }
            }
            else if(s=='<')
            {
                if(x<y)
                {
                    cout<<"Right"<<endl;
                }
                else
                {
                    cout<<"Wrong"<<endl;
                }
            }
            else if(s=='=')
            {
                if(x==y)
                {
                    cout<<"Right"<<endl;
                }
                else
                {
                    cout<<"Wrong"<<endl;
                }
            }
        }
