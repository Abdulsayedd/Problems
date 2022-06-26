#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y,z;
    int k , s , sum = 0;
    cin>>k>>s;
     for( x = 0; x <=k ; ++x)
        {
             for( y = 0; y <= k; ++y)
                    {

                        z = s - x - y;
                         if(z >=0 && z <= k)
                            {
                             sum ++;
                            }
                    }
         }
     cout <<sum<< endl;
}
