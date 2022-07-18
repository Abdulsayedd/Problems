#include <bits/stdc++.h>
using namespace std;
int main()
{
        int r,k,s=1,m;
        cin>>r>>k;
        for ( int i = 1 ; i <= 1000 ; i++)
        {
            if ((r*i)%10==k || (r*i)%10==0)
            {
                cout<<s;
                return 0;
            }
            else
            {
                s++;
            }
        }
}
