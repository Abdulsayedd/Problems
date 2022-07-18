#include <bits/stdc++.h>
using namespace std;
int main()
{
int x, y, ss = 0;
int arr[16] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    cin >> x >> y;
    for (int i = 0; i < 15; i++) {
        if (x == arr[i] && y == arr[i + 1]) {
            ss++;
            break;
        }
    }
    if (ss == 0) {
        cout << "NO";
    } else {
        cout << "YES";
    }
}

