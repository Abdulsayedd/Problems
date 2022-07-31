#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int main () {
    pre;
    string x;cin>>x;
    for(char i : x){if(i=='7'){cout<<"YES";return 0;}}
    cout<<"NO";
}