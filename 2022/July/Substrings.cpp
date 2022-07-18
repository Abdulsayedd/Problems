//Juniors Summer Camp ACM assiut - Juniors Contest 7
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
        map<char,unsigned long long>mp;
        string x;cin>>x;
        for(int i = 0 ; i < x.size() ; i++)
        {
            mp[x[i]]++;
        }
        unsigned long long sum=0;
        for(auto i : mp)
        {
            if(i.second>1)
            {
                i.second--;
                sum+=(((i.second*(i.second+1))/2));
            }
        }
        cout<<sum<<"\n";
    }
}