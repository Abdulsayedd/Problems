#include <bits/stdc++.h>
using namespace std ;
int main ()
        {
            double a,b;
            cin>>a>>b;
            if (a==0 && b==0)
            {
                cout<<"Origem"<<endl;
            }
            else if (a==0)
            {
                cout<<"Eixo Y"<<endl;
            }
            else if (b==0)
            {
                cout<<"Eixo X"<<endl;
            }
            else if (a>0 && b>0)
            {
                cout<<"Q1"<<endl;
            }
            else if (a<0 && b<0)
            {
                cout<<"Q3"<<endl;
            }
            else if (a>0 && b<0)
            {
                cout<<"Q4"<<endl;
            }
             else if (a<0 && b>0)
            {
                cout<<"Q2"<<endl;
            }


        }
