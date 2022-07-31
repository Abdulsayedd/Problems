//============================
// Name        : V. Creating Expression1
// Author      : Abdulsayed
// Version     : 2022
// Description : Recursion
// Link        : https://codeforces.com/group/n3sTiYtHxI/contest/348902/problem/V
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
bool f = false;
void fun(vector<long long>v,long long n,long long sum,long long m)
{
    if(n==0)
    {
        //cout<<sum<<"\n";
        if(sum==m){f=true;return ;}
        else return ;
    }
    fun(v,n-1,sum+v[n],m);
    fun(v,n-1,sum-v[n],m);
}
int main () {
    pre;
    long long n,m;cin>>n>>m;
    vector<long long>v;
    for(long long i = 0 ; i < n ; i++)
    {
        long long tmp;cin>>tmp;
        v.push_back(tmp);
    }
    fun(v,n-1,v[0],m);
    f?cout<<"YES":cout<<"NO";

}