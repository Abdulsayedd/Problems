#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ,sum=0;
    cin>>n;
    for(int i = 0  ; i < n ; i++)
    {
        string x;
        cin>>x;
        if (x[0]=='T')
        {
            sum+=4;
        }
        else if (x[0]=='C')
        {
            sum+=6;
        }
        else if (x[0]=='O')
        {
            sum+=8;
        }
        else if (x[0]=='D')
        {
            sum+=12;
        }
         else if (x[0]=='I')
        {
            sum+=20;
        }
    }
    cout<<sum;
}
