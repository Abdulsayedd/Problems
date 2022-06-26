#include <bits/stdc++.h>
using namespace std ;
int main ()
{

   long double a,b,c,d;
   long double b2,d2;

   cin>>a>>b>>c>>d;

   b2=b/10000000000000 ;
   d2=d/10000000000000 ;

   if(pow(a,b2)>pow(c,d2))
      {
          cout<<"YES";
      }
      else
      {
          cout<<"NO";
      }


}
