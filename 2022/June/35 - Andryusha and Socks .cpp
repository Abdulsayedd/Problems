#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    int freq[100005]={};
    int n,h,c=0,mx=0;cin>>n;
    n+=n;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>h;freq[h]++;
        if(freq[h]%2==0)c--;
        else c++;
        mx=max(mx,c);
    }
    cout<<mx;
}