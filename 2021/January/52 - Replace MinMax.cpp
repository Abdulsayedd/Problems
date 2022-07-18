#include <bits/stdc++.h>
using namespace std ;
//─█████████
int main (){
long long n,i,g,pmx,pmn;
cin>>n;
long long arr [n],mn,mx;

for (i=0 ; i<n ; i++)
{
    cin>>arr[i];
}
g=sizeof(arr)/sizeof(arr[0]);
mn=*min_element(arr,arr+g);
mx=*max_element(arr,arr+g);
for (int k=0 ; k<=n ; k++)
{
    if (mn==arr[k])
    {
        pmn=k;
        break;
    }
}
for (int b=0 ; b<=n ; b++)
{
    if (mx==arr[b])
    {
         pmx=b;
        break;
    }

}

swap(arr[pmx],arr[pmn]);
for (int z=0 ; z<n ; z++)
{
    cout<<arr[z]<<" ";
}
}
