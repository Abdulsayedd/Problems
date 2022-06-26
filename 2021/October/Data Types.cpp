#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int i1;
            double d1;
                        string s1;

    string temp;

    getline(cin, temp);
    i1 = stoi(temp);

    getline(cin, temp);
    d1 = stod(temp);

    getline(cin, s1);

            cout<<i1+d<<endl;
            cout<<fixed<<setprecision(1)<<d1+d<<endl;
            cout<<s<<s1;


    return 0;
}
