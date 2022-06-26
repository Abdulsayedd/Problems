    #include <bits/stdc++.h>
    using namespace std ;
    int main ()
    {
    string a, b;

    cin >> a >> b;
    if (a.size() == b.size() && a != b){
        cout << a.size() << endl;
    }

    else if (a.size() > b.size()){
            cout << a.size() << endl;
        }
        else if (b.size() > a.size()){
            cout << b.size() << endl;
        }
        else {
            cout << -1 << endl;
        }

        }


