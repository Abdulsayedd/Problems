#include <bits/stdc++.h>
using namespace std;
bool isSquare(int n) {
   int sr = sqrt(n);
   return (sr * sr == n);
}
void printPrimeAndFibnacciNumbers(int n) {
   bool primeNumbers[n + 1];
   memset(primeNumbers, true, sizeof(primeNumbers));
   for (int p = 2; p * p <= n; p++) {
      if (primeNumbers[p] == true) {
         for (int i = p * 2; i <= n; i += p)
            primeNumbers[i] = false;
      }
   }
   for (int i=2; i<=n; i++)
   if (primeNumbers[i] && (isSquare(5*i*i+4) > 0 || isSquare(5*i*i-4) > 0))
      cout<<i<<"\t";
}
int main() {
   int N = 50;
   cout<<"All prime Fibonacci numbers less than "<<N<<" are :\n";
   printPrimeAndFibnacciNumbers(N);
   return 0;
}
