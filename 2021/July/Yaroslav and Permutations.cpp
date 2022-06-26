#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int m=0,y,l=0;
    cin>>n;
    int x[n];
    double k=n;
    for ( int i = 0 ; i < n ; i ++)
    {
        cin>>x[i];
    }
        while (n--)
        {
         y=x[l];
        for ( int j = 1 ; j < n ; j++)
        {
        if (y==x[j])
        {
            m++;
            if (m >= ceil(k/2))
            {
              cout<<"NO";
              return 0;
            }
            else
            {
                l++;

            }
        }
        }
        m=0;
        }


    cout<<"YES";

}
