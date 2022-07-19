// https://codeforces.com/group/UZxBcPr4qR/contest/249115/problem/E
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int r,c,f=1;cin>>r>>c;
    char arr[505][505];
    for(int i=1;i<=r;i++)
        for(int j=1;j<=c;j++)
            cin>>arr[i][j];
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            if(arr[i][j]=='S')
            {
                if(arr[i][j+1]=='W'||arr[i][j-1]=='W'||arr[i+1][j]=='W'||arr[i-1][j]=='W')
                {
                    f=0;
                    break;
                }
                if(arr[i][j+1]=='.' ) arr[i][j+1] ='D';
                if(arr[i][j-1]=='.' ) arr[i][j-1] ='D';
                if(arr[i+1][j]=='.' ) arr[i+1][j] ='D';
                if(arr[i-1][j]=='.' ) arr[i-1][j] ='D';
            }
        }
        if(f==0) break;
    }
    if(f)
    {
        cout<<"Yes"<<"\n";
        for(int i=1;i<=r;i++)
        {
            for(int j=1;j<=c;j++)
            {cout<<arr[i][j];}
            cout<<"\n";
        }
    }
    else
        cout<<"No";
}