#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,coun=0;
    cin>>n;
    int o = n;
    while (n--)
    {
        int x,y;
        cin>>x>>y;
        if (x==y)
        {
            coun++;
        }
    }
    if (coun==o)
    {
        cout<<"Poor Alex"<<endl;
    }
    else
    {
        cout<<"Happy Alex"<<endl;
    }
}
