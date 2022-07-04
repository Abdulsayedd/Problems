//============================
// Name        : The Power Sum
// Author      : Abdulsayed
// Version     : 2022
// Description : Recursion
// Link        : https://www.hackerrank.com/challenges/the-power-sum/problem
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int c=0;
void fun(int i,int sum,int total,int power)
{
    if(i==50)
    {
        if(sum==total)c++;
        return ;
    }
    if(sum+pow(i,power)<=total)fun(i+1,sum+pow(i,power),total,power);
    fun(i+1,sum,total,power);
}
int main () {
    pre;
    int n,m;cin>>n>>m;
    fun(1,0,n,m);
    cout<<c;
}