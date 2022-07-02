#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    list<pair<int,int>>v;
    int n,m;cin>>n>>m;
    if(n==1)cout<<1;
    else {
        for (int i = 0; i < n; i++) {
            int h;
            cin >> h;
            v.push_back({h, i + 1});
        }
        while (!v.empty()) {
            if (v.begin()->first <= m)v.pop_front();
            else {
                v.begin()->first -= m;
                v.push_back(*v.begin());
                v.pop_front();
            }
            if (v.size() == 1) {
                cout << v.begin()->second;
                break;
            }
        }
    }
}