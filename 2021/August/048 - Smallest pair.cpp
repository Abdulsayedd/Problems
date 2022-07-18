#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    long long k;
    cin >> k;
    for (long long i=0 ; i<k ; i++)
    {
         vector <long long> arr2 ;
            long long n;
            cin>>n;
            long long w ;
            long long x[n];
            for (long long j=0 ; j<n ; j++)
            {
                cin>>x[j];
            }
            long long ll=1;
            for (long long m=0 ; m<n ; m++)
            {
                for (long long o=ll ; o<n ; o++)
            {
                w=(x[m]+x[o])+(o)-(m);
                arr2.push_back(w);
                if (o==n-1)
                {
                    ll++;
                }

            }
            }
            long long minn = *min_element(arr2.begin(),arr2.end());
            cout<<minn<<endl;
    }
}
