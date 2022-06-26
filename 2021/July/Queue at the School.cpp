#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x, y;
    string m;
    cin >> x >> y;
    cin>>m;
    while (y--)
    {
        for (int i = 1; i < x; ++i)
        {
            if (m[i] == 'G' && m[i-1] == 'B')
            {
                m[i] = 'B';
                m[i-1] = 'G';
                ++i;
            }
        }
    }
    cout << m << endl;
}
