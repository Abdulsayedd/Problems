#include <bits/stdc++.h>
#define hanaka ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main() {
hanaka
    int o;
    cin>>o;
    int ans=o;
    int y[100000]={0};
    for(int i=0; i<o; i++)
    {
        int x;
        cin>>x;
        y[x]=1;
        while(y[ans]==1)
        {
            cout<<ans<<" ";
            ans--;
        }
        cout<<endl;
    }
}
