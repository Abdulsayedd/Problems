#include <bits/stdc++.h>
using namespace std;


int main()
{
      int x,y,sum;
      cin >> x >> y;

      if (x<y)
      {
         for (int i=x+1 ; i<y ; i++)
       {
        if (i%2!=0)
        {
               sum+=i;
        }
           else
           {
            sum+0;
           }
       }

      }

            if (x>y)
      {
         for (int i=y+1 ; i<x ; i++)
       {
        if (i%2!=0)
        {
               sum+=i;
        }
           else
           {
            sum+0;
           }
       }

      }


      cout << sum << endl;
}
