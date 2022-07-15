#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
        int n,m;cin>>n>>m;
        bool f = false;
        n*=2;
        int arr[n];
        if(n==2)
        {
            int h,h1;
            cin>>h>>h1;
            if(abs(h-h1)>=m)cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        }
        else {
                for(int i = 0 ; i < n ; i++)
                {
                    cin>>arr[i];
                }
                sort(arr,arr+n);
                for(int i = 0 ; i < n/2 ; i++)
                {
                    //cout<<arr[(n/2)+i]<<" "<<arr[i]<<"\n";
                    if(arr[(n/2)+i]-arr[i]<m)
                    {
                        f=true;break;
                    }
                }
                f?cout<<"NO"<<endl:cout<<"YES"<<endl;
        }
    }
}