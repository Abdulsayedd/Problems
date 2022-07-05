//============================
// Name        : I. Count Vowels
// Author      : Abdulsayed
// Version     : 2022
// Description : Recursion
// Link        : https://codeforces.com/group/n3sTiYtHxI/contest/348902/problem/I
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
void fun (int sum , string x)
{
    if(x.empty()){cout<<sum;return ;}
    char f = x[x.size()-1];
    if(f=='a'||f=='e'||f=='i'||f=='o'||f=='u' || f=='A'||f=='E'||f=='I'||f=='O'||f=='U')
    {
        sum++;
    }
    x.pop_back();
    fun(sum,x);

}
int main () {
    pre;
        string x;
        getline(cin,x);
        fun(0,x);
}