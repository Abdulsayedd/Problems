    #include <bits/stdc++.h>
    #define ll long long
   // #define endl "\n"
    #define testcase int t ; cin>>t ; while(t--)
    #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;
    int main () {
        pre;
        int n,q,c=0,l,r;cin>>n>>q;
        string x;cin>>x;
        int arr[100005]{0};
        for(int i = 0 ; i < n ; i++)arr[i+1]=arr[i]+((x[i]-'a')+1);
        while(q--)
        {
            cin>>l>>r;
            cout<<arr[r]-arr[--l]<<endl;
        }
    }