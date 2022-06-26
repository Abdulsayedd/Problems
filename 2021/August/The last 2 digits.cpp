#include <bits/stdc++.h>
#include <iostream>
#include<sstream>
using namespace std ;
int main ()
        {
            long long a,b,c,d,sum;
            cin>>a>>b>>c>>d;
            sum=(a%100)*(b%100)*(c%100)*(d%100);
            if(sum%100==sum%10)
            {
                cout<<"0"<<sum%10;
                return 0;
            }
            else
            {
                cout<<sum%100;
            }
        }
