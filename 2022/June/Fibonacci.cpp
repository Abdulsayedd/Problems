#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
const unsigned long long MAX = 1000;
unsigned long long f[MAX] = {0};
unsigned long long fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return (f[n] = 1);
    if (f[n])
        return f[n];
    int k = (n & 1)? (n+1)/2 : n/2;
    f[n] = (n & 1)? (fib(k)*fib(k) + fib(k-1)*fib(k-1)): (2*fib(k-1) + fib(k))*fib(k);
    return f[n];
}
int main ()
{
    pre;
    unsigned long long n;cin>>n;
    cout<<fib(n);
}