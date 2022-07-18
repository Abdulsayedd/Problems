#include <bits/stdc++.h>
using namespace std;
int main()
{       int c=0;
        string x;
        cin>>x;

        for ( int i = 0 ; i < x.length(); i++)
        {
            if (x[i]==x[i+1] && x[i]==x[i+2] && x[i]==x[i+3] && x[i]==x[i+4] &&x[i]==x[i+5] &&x[i]==x[i+6])
            {
            c=1;
            }
        }
        if (c==1)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }



}
