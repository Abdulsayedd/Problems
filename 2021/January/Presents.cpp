#include <bits/stdc++.h>
using namespace std ;
//─█████████
int main (){
   int n ,a;
   cin >>n;
   int arr[n];
   for (int i=1;i<=n;i++)
   {
       cin >>a;
       arr[a-1]=i;
   }
    for (int j =0;j<n;j++)
    {
      cout<<arr[j]<<" ";
    }


}
