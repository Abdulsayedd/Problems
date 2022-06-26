#include <bits/stdc++.h>
using namespace std;
int main()
{
        int k;
        string x , y , z;
        cin>>x;
        cin>>y;
        k = x.size();
        for (int i = k-1 ; i >= 0;i--)
        {
            z+=x[i];
        }
        if(z==y)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
}
