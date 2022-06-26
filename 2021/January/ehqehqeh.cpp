#include <bits/stdc++.h>
using namespace std ;
//─█████████
int main (){
unsigned long long N,mm=0;
cin>>N;
unsigned long long arr [N];

for (int i = 0 ; i<N ; i++)
{
    cin>>arr[i];
}
for (int i = 0 ; i<N ; i++)
{
   if (arr[i]%2==0)
    {
      arr[i]/=2;
      mm++;
    }
    else if (arr[i]%2!=0)
    {
        break;
    }


}
cout<<mm/N;
}

