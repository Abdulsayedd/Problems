    #include <bits/stdc++.h>
    #define testcase int t;cin>>t;while(t--)
    #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;
int main ()
{
    testcase {
        int n, a, b;
        cin >> n >> a >> b;
        int s = 0;
        string x = "";
        char m = 'z';
        for(int i = 0 ; i < n ;i++)
        {
            if(i%b==0)m='z',x+=m;
            else m--,x+=m;
        }
        cout<<x<<"\n";
    }
}