#include <bits/stdc++.h>
using namespace std;
//─█████████
int main()
{
        vector<long long>x,m;
        for ( int i = 0 ; i < 3 ; i ++)
        {
            int r;
            cin>>r;
            x.push_back(r);
            m.push_back(r);
        }
        sort(x.begin(),x.end());
        for (auto it=x.begin();it!=x.end();it++)
        {
            cout<<*it<<endl;
        }
        cout<<endl;
        for (auto it=m.begin();it!=m.end();it++)
        {
            cout<<*it<<endl;
        }


}
