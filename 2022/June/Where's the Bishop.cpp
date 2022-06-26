#include <bits/stdc++.h>
#define testcase int t;cin>>t;while(t--)
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    //freopen ("sss.in","r", stdin);
    pre;
    testcase {
        char arr[8][8];
        for(int i = 0 ; i < 8 ; i++)
        {
            for(int j= 0 ; j < 8 ; j++)
            {
                cin>>arr[i][j];
            }
        }
        int l,l1;
        for(int i = 0 ; i < 8 ; i++)
        {
            for(int j= 0 ; j < 8 ; j++)
            {
                if(arr[i][j]=='#')
                {
                    if(arr[i+1][j-1] == '#' && arr[i-1][j+1] == '#' && arr[i+1][j+1] == '#' && arr[i-1][j-1] == '#' )
                    {
                        l=i;l1=j;break;
                    }
                }
            }
        }
        cout<<l+1<<" "<<l1+1<<"\n";
    }
}