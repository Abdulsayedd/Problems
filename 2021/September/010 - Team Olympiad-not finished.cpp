#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;
int main() {
    int n, s;
    cin >> n;
    vector<int>x1, x2, x3;
    for (int i = 0; i <n; i++)
    {
        cin >> s;
        if (s == 1) {
            x1.push_back(i+1);
        }
        else if (s == 2) {
            x2.push_back(i+1);
        }
        else
            x3.push_back(i+1);
    }
    int x1s = x1.size();
    int x2s = x2.size();
    int x3s = x3.size();
    int minmm = min(x1s, min(x2s, x3s));
    cout << minmm << endl;
        for (int i = 0; i < minmm; i++)
        {
            cout << x1[i] << " " << x2[i] << " " << x3[i]<< endl;
        }
    return 0;
}
