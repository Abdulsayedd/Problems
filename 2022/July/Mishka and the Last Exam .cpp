//https://codeforces.com/group/UZxBcPr4qR/contest/248772/problem/C
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    /*
     * Let's present the following greedy approach.
     * The numbers will be restored in pairs (a1,an), (a2,an−1) and so on.
     * Thus, we can have some limits on the values of the current pair
     * (satisfying the criteria about sort). Initially,
     * l=0,r=1018 and they are updated with l=ai,r=an−i+1.
     * Let l be minimal possible in the answer.
     * Take ai=max(l,bi−r) and r=bi−l.
     * That way l was chosen in such a way that both l and r are within the restrictions and l is also minimal possible.
     * If l was any greater than we would move both l limit up and r
     * Overall complexity: O(n).*/
    long long n,h;cin>>n;
    long long arr[n];
    cin>>h;
    arr[0]=0;
    arr[n-1]=h;
    for(long long i = 1 ; i < n/2 ; i++)
    {
        cin>>h;
        long long mn=min(arr[n-i],h-arr[n-i]);
        arr[i]=max(arr[i-1],mn);
        arr[n-i-1]=h-arr[i];
    }
    for(auto i : arr)cout<<i<<" ";
}