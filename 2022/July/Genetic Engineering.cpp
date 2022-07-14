#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    string x;cin>>x;
    vector<string>v;
    string y="";
    int c=0;
    for(int i = 0 ; i < x.size() ; i++)
    {
        y+=x[i];
        while(x[i]==x[i+1])
        {
            y+=x[i++];
        }
        v.push_back(y);
        y="";
    }
    for(auto i : v)!(i.size()&1)?c++:c;
    cout<<c<<"\n";
}