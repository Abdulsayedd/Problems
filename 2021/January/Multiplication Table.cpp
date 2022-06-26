#include <bits/stdc++.h>
using namespace std;


int main()
{
 int N;
 cin >> N;

 for (int i=0; i < N ; i++)
{
     int x,y,ans=0 ;

    cin >> x >> y;

    if (x < y)
    {
        for (int k=x+1; k < y ; k++)
        {
            if (k%2!=0)
            {
                ans+=k;
            }
        }
        cout << ans << endl;

    }
    else if (x > y)
    {
        for (int k=y+1 ; k < x ; k++ )
        {
            if (k%2!=0)
            {
                ans+=k;
            }
        }
        cout << ans << endl;
    }
    else if (x==y)
    {
        cout << 0 << endl ;
    }
}
return 0;
 }
