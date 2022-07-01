#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int isPrime(long long number) {
    if (number == 0 || number == 1 || (number % 2 == 0 && number > 2)) {
        return 0;
    }
    else {
        for (long long i=3; i <= (long long)sqrt(number)+1; i++) {
            if (number % i == 0) {
                return 0;
            }
        }
        return 1;
    }
}
int main ()
{
    pre;
    int t;cin>>t;
    while(t--)
    {
        long long n;cin>>n;
        (n==1)?cout<<"Neither"<<endl: isPrime(n)?cout<<"Prime"<<endl:cout<<"Composite"<<"\n";
    }
}