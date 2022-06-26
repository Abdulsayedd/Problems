#include <bits/stdc++.h>
using namespace std;
//─█████████
int main()
{
ios_base::sync_with_stdio(false) , cin.tie(0);
int N;
cin>>N;
int arr[N];

for (int j=0;j<N;j++)
{
         cin>>arr[j];
}

sort(arr,arr+N);
for (int i=0;i<N;i++)
{
    cout<<arr[i]<<" ";
}
}
