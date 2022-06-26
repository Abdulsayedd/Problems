#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define testcase int t ; cin>>t ; while(t--)
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
signed main () {
    pre;
    int n;
    cin >> n;
    vector<vector<int>>v;
    vector<int> plc;
    bitset<32> b(1);
    int h;
    for (int i = 0; i < n; i++)
    {
       cin>>h;
       plc.push_back(h);
    }
    int c=0;
    for(int i  = 0 ; i < pow(2,n); i++)
    {
        b=i;
        vector<int>bb;
        for(int j = 0 ; j < n ; j++)
        {
            if(b[j]==1)
            {
                bb.push_back(plc[j]);
            }
        }
        v.push_back(bb);
    }
    int c1=0;
    int o,e;
    for(auto it : v)
    {
        o=0,e=0;
        for(auto i : it)
        {
            if(i%2==0)
            {
                e++;
            }
            else o++;
        }
        if(e>o)c1++;
    }
    cout<<c1<<endl;
}
