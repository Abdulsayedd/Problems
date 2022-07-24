#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int main () {
    pre;
    int n;cin>>n;
    string x,y,z;
    cin>>x>>y>>z;
    string ans="";
    for(int i = 0 ; i < x.size() ; i++)
    {
        if(x[i]==y[i] && x[i]==z[i])ans+=x[i];
        else if(x[i]!=y[i] && y[i]!=z[i]&&z[i]!=x[i])ans+=x[i];
        else if(x[i]==z[i])ans+=x[i];
        else if(x[i]==y[i])ans+=x[i];
        else if(z[i]==y[i])ans+=y[i];
    }
    cout<<ans;
}