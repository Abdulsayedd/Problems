#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
int main (){
        pre;
        int t;cin>>t;
        while(t--)
        {
            int n;cin>>n;
            deque<int>d;
            for(int i = 9;i >=1 ;i--)
            {
                if(n>=i)
                {
                    d.push_front(i);
                    n-=i;
                }
            }
            for(auto i : d)cout<<i;
            cout<<"\n";
        }
}