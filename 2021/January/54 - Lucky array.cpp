#include <bits/stdc++.h>
using namespace std ;
//─█████████
int main (){
long long n,i,g,freq=0;
cin>>n;
long long arr [n],mn;

for (i=0 ; i<n ; i++)
{
    cin>>arr[i];
}
g=sizeof(arr)/sizeof(arr[0]);
mn=*min_element(arr,arr+g);
for (int k=0 ; k<=n ; k++)
{
     if (arr[k]==mn)
     {
         freq++;
     }

}
if (freq%2==0)
{
    cout<<"Unlucky";
}
else
{
    cout<<"Lucky";
}

}
