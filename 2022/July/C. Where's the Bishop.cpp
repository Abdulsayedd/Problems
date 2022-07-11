// Problem     : C. Where's the Bishop? , https://codeforces.com/contest/1692/problem/C
// Author      : Abdulsayed
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
        char arr[8][8];
        for(int i = 0 ; i < 8 ; i++)
            for(int j= 0 ; j < 8 ; j++)
                cin>>arr[i][j];
        int r,c;
        for(int i = 0 ; i < 8 ; i++)
        {
            for(int j= 0 ; j < 8 ; j++)
            {
                if(arr[i][j]=='#')
                {
                    bool f=arr[i+1][j-1] == '#' && arr[i-1][j+1] == '#' && arr[i+1][j+1] == '#' && arr[i-1][j-1] == '#';
                    if(f)
                    {
                        r=i;c=j;break;
                    }
                }
            }
        }
        cout<<r+1<<" "<<c+1<<"\n";
    }

}

