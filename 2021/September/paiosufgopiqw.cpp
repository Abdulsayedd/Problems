#include <bits/stdc++.h>
using namespace std;

int Add(int x, int y)
{
    if (y == 0)
        return x;
    else
        return Add( x ^ y,(unsigned) (x & y) << 1);
}

// Driver code
int main()
{
	cout << Add(15, 32);
	return 0;
}
