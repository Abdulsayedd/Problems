#include <bits/stdc++.h>
using namespace std ;
int main ()
        {
            char x;
            cin>>x;
            char xlower=tolower(x),xupper=toupper(x);
            if (x>=65 && x<91)
            {
                cout<<xlower;
            }
            else
            {
                cout<<xupper;
            }
        }
