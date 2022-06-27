    #include <bits/stdc++.h>
    #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;
    int main ()
    {
        pre;
        string x;cin>>x;
        int n,m;cin>>n;m=n;
        while(m--)
        {
            char c;cin>>c;
           x.erase(remove(x.begin(),x.end(),c),x.end());
        }
        cout<<x;
    }