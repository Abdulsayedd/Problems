#include <bits/stdc++.h>
using namespace std ;
//─█████████
int main (){
ios_base::sync_with_stdio(false) , cin.tie(0);
int n ;
cin>>n;
long long x;
vector<long long>arr(n);
for (int i=0;i<n;i++)
{
    cin>>x;
    arr.push_back(x);
}
cout<<*max_element(arr.begin(),arr.end());
}
