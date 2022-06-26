#include <bits/stdc++.h>
using namespace std ;
//─█████████
bool PR(unsigned long long m)
{


ios_base::sync_with_stdio(false) , cin.tie(0);

 if (m <= 1)
        return false;
    else if (m==2||m==3)
        return true;
    else if (m % 2 == 0 || m % 3 == 0)
        return false;

    for (unsigned long long i = 5; i * i <= m; i=i+6)
        if (m % i == 0 || m % (i + 2) == 0)
        {
                        return false;
        }
return true;
}

int main()
{
    unsigned long long x ;
    cin>>x;
    PR(x) ? cout << "YES\n" : cout << "NO\n";
}
