#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    long long t;cin>>t;
    while(t--)
    {
        bool f = false;
        long long n;
        cin >> n;
        long long arr[n];
        long long c=0;
        for (long long i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        long long l=0,r=1;
        while(l<n)
        {
            while(r==n)
            {
                if(l==r-1){f=true;break;}
                c+=arr[l++];
            }
            if(f)break;
            if(arr[l] && !arr[r])
            {
                arr[l]--;
                arr[r]++;
                c++;
                if(!arr[l])l++;
                r++;
            }
            else if(arr[l] && arr[r])r++;
            if(!arr[l] && arr[r]){l=r;r++;}
            if(!arr[l] && !arr[r]){l++;r++;}
        }
        cout<<c<<"\n";
    }
}