//============================
// Name        : X. The maximum path-sum
// Author      : Abdulsayed
// Version     : 2022
// Description : Recursion
// Link        : https://codeforces.com/group/n3sTiYtHxI/contest/348902/problem/X
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
long long mx = INT_MIN;
void fun(vector<vector<int>>&v,int i,int j, long long sum)
{
    sum+=v[i][j];
    if(i<v.size()-1 && j<v[0].size()-1)
    {
        fun(v,i+1,j,sum);
        fun(v,i,j+1,sum);
    }
    else if(i<v.size()-1)
        fun(v,i+1,j,sum);
    else if(j<v[0].size()-1)
        fun(v,i,j+1,sum);
    else {
        mx=max(mx,sum);
        return;}

}
int main () {
    pre;
    int n,m;cin>>n>>m;
    vector<vector<int>>v;
    for(int i = 0 ; i < n ; i++)
    {
        vector<int>v1;
        for(int j = 0 ; j < m ; j++)
        {
            int temp;cin>>temp;
            v1.push_back(temp);
        }
        v.push_back(v1);
    }
    fun(v,0,0,0);
    cout<<mx;
}