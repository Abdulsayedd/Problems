#include <bits/stdc++.h>
using namespace std;
//─█████████
int main()
{
  int a,b;
  cin>>a>>b;
if (a>b)
{
    cout<<0;
}
  for (int i=1;  ;i++)
  {
   a=a*3;
   b=b*2;

   if (a>b)
   {
    cout<<i;
    break;
   }
   else
   {
       continue;
   }
  }













}
