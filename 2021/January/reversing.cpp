#include <bits/stdc++.h>
using namespace std;

//─█████████
int main()
{
    int x,h,i;
    cin>>x;
    int arr [x];
    for (i=0 ; i<x ; i++)
    {
        cin>>arr [i];
    }

    for (i=(x-1) ; i>=0 ; i--)
    {
        cout<<arr [i]<<" ";
    }

return 0;



}
