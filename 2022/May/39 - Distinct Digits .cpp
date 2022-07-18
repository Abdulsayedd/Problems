    #include <bits/stdc++.h>
    #define testcase int t;cin>>t;while(t--)
    #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;
bool chk(int n)
{
    map<int,int>mp;
    while(n)
    {
        if(mp[n%10]>0)return false;
        else mp[n%10]++;
        n/=10;
    }
    return true;
}
    int main () {
        pre;
        int n,m;cin>>n>>m;
        for(int i = n ; i<=m;i++)
        {
            if(chk(i))
            {
                cout<<i;return 0;
            }
        }
        cout<<-1;
    }