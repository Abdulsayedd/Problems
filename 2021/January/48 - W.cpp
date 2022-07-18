#include <iostream>

using namespace std;

int main()
{
 int n;
  cin>>n;
  bool isprime = true;
  for (int i = 2; i < n; ++i)  {
        if (n%i==0) {
                isprime = false;

        }
        }
        if (isprime ==true) {
                cout <<"yes";
                }
        else  {
  cout<<"No";

 }
 return 0;
 }
