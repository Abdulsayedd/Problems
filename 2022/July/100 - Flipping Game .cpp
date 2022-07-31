#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int n,o=0;cin>>n;
    bool arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
        arr[i]?o++:o;
    }
    int mx=INT_MIN;
    for(int i = 0 ; i < n ; i++)
    {
        int h=o;
        for(int j = i ; j < n ; j++)
        {
            arr[j]?h--:h++;
            mx=max(mx,h);
        }
    }
    cout<<mx;

}