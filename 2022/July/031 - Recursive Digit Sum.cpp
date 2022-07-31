//============================
// Name        : Recursive Digit Sum
// Author      : Abdulsayed
// Version     : 2022
// Description : Recursion
// Link        : https://www.hackerrank.com/challenges/recursive-digit-sum/problem
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
map<string,unsigned long long>mp;
void fun(string x)
{
    if(mp[x]!=0)
    {
        string x1 = to_string(mp[x]);
        fun(x1);
    }
    else {
        unsigned long long sum = 0;
        for (char i: x) {
            sum += i - '0';
        }
        mp[x] = sum;
        if (sum < 10) {
            cout << sum;
            return;
        }
        else {
            string x1 = to_string(sum);
            //cout<<x1<<" *"<<"\n";
            fun(x1);
        }
    }
}
int main () {
    pre;
    string x;int n;
    cin>>x>>n;
    string y=x;
    for(int i = 0 ; i < n-1 ; i++)
    {
        x+=y;
    }
    fun(x);

}