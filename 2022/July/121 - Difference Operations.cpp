#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
long long const MOD=1000000007;
int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
        int n;cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)cin >> arr[i];
        bool f = false;
        for(int i = 1 ; i < n ; i++)
            if(arr[i]%arr[0]) {f=true;break;}
        f?cout<<"NO"<<endl:cout<<"YES"<<endl;
    }
}