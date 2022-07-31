#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
pair<int,int>findIntersection(int intervals[][2], int N)
{
    int l = intervals[0][0];
    int r = intervals[0][1];
    for (int i = 1; i < N; i++) {
        if (intervals[i][0] > r || intervals[i][1] < l) {
            return{-1,0};
        }
        else {
            l = max(l, intervals[i][0]);
            r = min(r, intervals[i][1]);
        }
    }
    return {l,r};
}
int main () {
    pre;
int n,m;cin>>n>>m;
int arr[m][2];
for(int i = 0 ; i < m ; i++)
{
    cin>>arr[i][0];
    cin>>arr[i][1];
}
pair<int,int>p= findIntersection(arr,m);
    if(p.first==-1 &&!p.second)cout<<0;
    else cout<<p.second-p.first+1;
}