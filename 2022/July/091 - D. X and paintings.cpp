#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
        int r,c,ins;
        cin>>r>>c>>ins;
        char arr[110][110];
        for(int i = 1;i<=r;i++)
            for(int j=1;j<=c;j++)
                    arr[i][j]='.';
        int r1,c1,r2,c2;
        char ch;
        while(ins--)
        {
            cin>>r1>>c1>>r2>>c2>>ch;
            for(int i = r1;i<=r2;i++)
                for(int j=c1;j<=c2;j++)
                    arr[i][j]=ch;
        }
        for(int i = 1 ; i <= r;i++)
        {
            for(int j = 1 ; j <= c; j++)
            {
                cout<<arr[i][j];
            }
            cout<<"\n";
        }
    }
}