#include <bits/stdc++.h>
using namespace std;
//mohammed 3la el beatttttttttttttttt xDDDDDDDDDD


int main()
{
    int ans=0;
    long long x;
    cin >> x;
    while (x >= 1)
    {
           if (x%2==1)
    {
     ans++;
     x--;

    }
    else if (x%2==0)
    {
    x/=2;
    }
    }
    cout << ans;
    }



