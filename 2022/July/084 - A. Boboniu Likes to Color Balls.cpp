#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int t,o,color[4];cin>>t;
    string ans;
    while(t--)
    {
        ans="No";
        o=0;
        for(int i = 0 ; i < 4 ; i++)
        {
            cin>>color[i];
            if(color[i]&1)o++;
        }
        if(o<=1)ans="Yes";
        else
        {
            o=0;
            if(color[0]&&color[1]&&color[2])
            {
                color[0]--;color[1]--;color[2]--;color[3]+=3;
            }
            for(int i = 0 ; i < 4 ; i++)
            {
                if(color[i]&1)o++;
            }
            if(o<=1)ans="Yes";
        }
        cout<<ans<<"\n";
    }
}

