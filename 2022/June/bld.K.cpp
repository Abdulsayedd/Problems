#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    long long n,m ;cin>>n>>m;
    int arr[n];
    for(int &i:arr)cin>>i;
    unordered_map<long long, long long> mp;
    long long total,sum;total=sum=0;
    for (int i = 0; i < n; i++)
        {
        total += arr[i];
        if (total == m)sum=i+1;
        if (mp.find(total) == mp.end())
            mp[total]=i;
        //for(auto i : mp)cout<<i.first<<" "<<i.second<<"\n";
        if (mp.find(total-m) != mp.end())
            {
            if (sum < (i - mp[total - m]))sum = i - mp[total - m];
            }
            //for(auto i : mp)cout<<i.first<<" * "<<i.second<<"\n";
         }
        cout<<sum<<endl;
}