#include <bits/stdc++.h>
using namespace std ;
//─█████████
int main()
{
unsigned long long O ,K ;
  int S;
  cin>>S;

  for(O=0;O<S;O++)
  {
      cin>>K;
      if (K==0)
      {
          cout<<'0';
      }
      else{
      while(K!=0)
      {
          if(K%2==0)
          {
              cout<<'0';
              K=(K/2);
          }
          else
          {
              cout<<'1';
              K=(K/2);
          }
      }
      }
      cout<<endl;
  }
}




