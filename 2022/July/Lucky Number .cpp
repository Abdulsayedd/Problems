//Juniors Summer Camp ACM assiut - Juniors Contest 7
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
        string x;cin>>x;
        long long sumo{},sume{};
        for(int i = 0 ; i < x.size();i++)
        {
            if(i&1)sumo+=x[i]-'0';
            else sume+=x[i]-'0';
        }
        long long ans=abs(sumo-sume);
        ans>7?cout<<"no"<<endl:cout<<"yes"<<endl;
    }
}