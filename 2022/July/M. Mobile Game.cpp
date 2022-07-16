#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
long long sum=0,h;
bool valid (long long pw , long long sum)
{
    return (pw*(pw+1)/2)>=sum;
}
int main () {
    pre;
    int t;cin>>t;
    long long x,y;
    while(t--)
    {
        cin >> x >> y;
        long long sum=x+y;
        long long st = 1, en = 2e9, mid, ans = 0;
        while(st <= en){
            mid = (st + en) / 2;
            if(valid(mid,sum)){
                en = mid - 1;
                ans = mid;
            }
            else{
                st = mid + 1;
            }
        }
        cout << ans << endl;
    }
}