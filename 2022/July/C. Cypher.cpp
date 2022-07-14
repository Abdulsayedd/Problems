#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
        int n,m;cin >> n;m=n;
        int arr[n];
        for (int i = 0; i < n; i++)cin >> arr[i];
        int j=0;
        while(m--)
        {
            int h;string x;cin>>h>>x;
            int d=0,u;
            for(int i = 0 ; i < h ; i++)x[i]=='D'?d++:d;
            u=h-d;
            if(d>u)
            {
                d-=u;
                arr[j]=(arr[j]+d)%10;
            }
            else if(d<u)
            {
                u-=d;
                arr[j]=(arr[j]-u)%10;
            }
            j++;
        }
        for(int i : arr)
        {
            if(i<0)cout<<10+i<<" ";
            else cout<<i<<" ";
        }
        cout<<"\n";
    }

}