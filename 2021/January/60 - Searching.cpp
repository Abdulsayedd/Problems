#include <bits/stdc++.h>
using namespace std ;
//─█████████
int main (){

    int n,ans=0;
    cin>>n;
    unsigned long long arr[n],x;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>x;
    for(int j=0;j<n;j++)
    {
        if (x==arr[j])
        {cout<<j;
        ans++;
        break;}}

if (ans==0)
{cout<<-1;}

}


