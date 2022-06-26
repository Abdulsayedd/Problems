#include <bits/stdc++.h>
using namespace std;


int main()
{
    double N,x,y;
    cin >> N;

    for (int i=1; i <= N ; i++)
    {
            cin >> x >> y;

    if (y==0)
    {
        cout << "divisao impossivel";
    }

    else

    {
        cout << setprecision (1) << fixed << x/y << endl;
    }
    }
    }
