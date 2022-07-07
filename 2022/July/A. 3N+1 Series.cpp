//============================
// Name        : A. 3N+1 Series
// Author      : Abdulsayed
// Version     : 2022
// Description : Recursion
// Link        : https://codeforces.com/group/gA8A93jony/contest/269931/problem/A
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
long long c=0;
void fun(int n)
{
   c++;
   if(n<=1)return;
   !(n&1)?fun(n/2):fun(n*3+1);
}
int main () {
    pre;
    int n;cin >> n;
    fun(n);
    cout<<c;
}