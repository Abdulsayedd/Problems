#include <bits/stdc++.h>
using namespace std ;
//─█████████
int main (){
int n1=1,n2=1,n3,x;
unsigned long long ans;
unsigned long long arr[50];
    arr[0]=0;
    arr[1]=n1;
    arr[2]=n2;
    for (int j=3;j<47;j++)
    {
        n3=n1+n2;
        arr[j]=n3;
        n1=n2;
        n2=n3;
    }
    cin>>x;

    arr[47]=2971215073;
    arr[48]=4807526976;
    arr[49]=7778742049;

    cout<<arr[x-1];

}
