#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
char arr[100][100];
int main (){
        pre;
        int n,m;cin>>n>>m;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                cin>>arr[i][j];
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = 1 ; j <=m ; j ++)
            {
                if(arr[i][j]=='o')
                {

                    arr[i][j]='x';
                    arr[i][j-1]!='o'?arr[i][j-1]='x':arr[i][j-1]='o';
                    arr[i][j+1]!='o'?arr[i][j+1]='x':arr[i][j+1]='o';
                    arr[i-1][j-1]!='o'?arr[i-1][j-1]='x':arr[i-1][j-1]='o';
                    arr[i-1][j+1]!='o'?arr[i-1][j+1]='x':arr[i-1][j+1]='o';
                    arr[i-1][j]!='o'?arr[i-1][j]='x':arr[i-1][j]='o';
                    arr[i+1][j+1]!='o'?arr[i+1][j+1]='x':arr[i+1][j+1]='o';
                    arr[i+1][j-1]!='o'?arr[i+1][j-1]='x':arr[i+1][j-1]='o';
                    arr[i+1][j]!='o'?arr[i+1][j]='x':arr[i+1][j]='o';
                }
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
                cout<<arr[i][j];
            cout<<"\n";
        }


}