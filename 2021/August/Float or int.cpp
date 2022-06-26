#include <bits/stdc++.h>
using namespace std ;
int main ()
        {
            int fl=0;
            double x;
            cin>>x;
            if(abs(x-int(x))>0)
            {
                fl=1;
            }
            if (fl==1)
            {
                cout<<"float "<<int(x)<<" "<<abs(x-int(x))<<endl;
                return 0;
            }
            else
            {
                cout<<"int "<<int(x)<<endl;
                return 0;
            }

        }

