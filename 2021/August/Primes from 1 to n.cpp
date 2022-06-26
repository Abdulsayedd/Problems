#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int n ;
    cin>>n;
    for(int i = 2 ; i<= n ;i++)
    {
        int f=0 ;
        for(int j=2 ; j<=sqrt(i);j++)

            {
                if(i%j==0)
                {
                    f=1;
                    break;
                }
            }
        if(f==0)

        {
            cout<<i<<" ";
        }
    }

}
