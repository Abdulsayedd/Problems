#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    int t;cin>>t;
    while(t--)
    {
        int n,c=0;cin >> n;int arr[n];
        for (int i = 0; i < n; i++)cin >> arr[i];
        vector<int>v;
        for(int i : arr)if(!(i&1))v.push_back(i);
        for(int i : arr)if((i&1))v.push_back(i);
        for(int i = 0 ; i < v.size() ; i++)
            for(int j = i+1 ; j<v.size(); j++)
                if(__gcd(v[i],v[j]+v[j])>1)c++;
        cout<<c<<"\n";
    }

}


