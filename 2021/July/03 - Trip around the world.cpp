#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    long long money , n ,sum=0,counter=0;
        cin>>money;
        cin>>n;
        long long x[n];
        for (long long i = 0 ; i<n;i++)
        {
            cin >> x[i];
        }
        sort(x,x+n);

        for (long long i = 0 ; i<n ; i++)
        {
            sum +=x[i];
            if (sum<=money)
            {
                  counter++;
            }
        }
        cout<< counter;
}
