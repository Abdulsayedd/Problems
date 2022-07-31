#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define ull unsigned long long
const ll mod=1000000007;
int freq[150004];
int main (){
    pre;
    int n;cin>>n;
    int mx=0;
    for(int i = 0 ; i < n ; i++)
    {
        int h;cin>>h;
        freq[h]++;
        mx=max(mx,h);
    }
    for(int i = mx+1 ; i>=0 ; i--)
    {
        if(freq[i])
        {
        if(freq[i+1]==0)
            {
                freq[i]--;
                freq[i+1]++;
                i++;
            }
        }
       // cout<<i<<" "<<freq[i]<<"\n";
    }
    for(int i = 2 ; i <= mx+1 ;i++)
    {
        if(freq[i])
        {
            if (freq[i - 1] == 0) {
                freq[i - 1]++;
                freq[i]--;
                i--;
            }
        }
       // cout<<i<<" "<<freq[i]<<"\n";
    }
    ll c=0;
    for(int i = 0 ; i <= 150001 ; i++)
    {
        if(freq[i]>0)
        {
            c++;
        }
    }
    cout<<c;
}