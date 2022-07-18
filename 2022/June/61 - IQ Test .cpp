#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    char arr[4][4];
    int d,h;
    for(int i = 0 ; i <4;i++)
        for(int j = 0 ; j < 4 ; j++)
            cin>>arr[i][j];
    for(int i = 0 ; i <3;i++)
        for(int j = 0 ; j < 3 ; j++)
        {
            d=h=0;
            if(arr[i][j]=='.')d++;
            if(arr[i+1][j]=='.')d++;
            if(arr[i][j+1]=='.')d++;
            if(arr[i+1][j+1]=='.')d++;
            if(d>=3){cout<<"YES";return 0;}
            if(arr[i][j]=='#')h++;
            if(arr[i+1][j]=='#')h++;
            if(arr[i][j+1]=='#')h++;
            if(arr[i+1][j+1]=='#')h++;
            if(h>=3){cout<<"YES";return 0;}
        }
    cout<<"NO";
}