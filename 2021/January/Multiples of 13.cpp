#include <bits/stdc++.h>
using namespace std;


int main()
{
   int X,Y,sum;
   cin >> X >> Y;

   for (int i=X ; i<=Y ; i++)

   {
       if (i%13!=0)
       {
           sum+=i;
       }

   }

cout << sum <<endl;
    }
