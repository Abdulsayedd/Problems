#include <bits/stdc++.h>
#define testcase int t;cin>>t;while(t--)
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    //freopen ("sss.in","r", stdin);
    pre;
    testcase {
        int n;cin>>n;
        int arr[n];
        int freq[100005]{};
        int mx=0;
        int c=0;
        for(int i = 0 ; i < n ; i++)
        {
            cin>>arr[i];
            freq[arr[i]]++;
            mx=max(mx,freq[arr[i]]);
        }
        for(int i = 0 ; i < 100005 ; i++)
        {
            if(freq[i]==mx)c++;
        }
        cout<<c<<"\n";

    }
}