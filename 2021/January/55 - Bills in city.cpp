#include <bits/stdc++.h>
using namespace std ;
//─█████████
int main (){
long long n,i,s,a;
cin>>n;
long long arr [n],arr2 [n-1] ,mn,mx;

for (i=0 ; i<n ; i++)
{
    cin>>arr[i];
}

for(int j=0;j<n;j++)
{
arr2[j]=abs((arr[j]-arr[j+1]));
}
s=sizeof(arr2)/sizeof(arr2[0]);

mx=*max_element(arr2,arr2+s);

cout<<mx<<endl;
}
