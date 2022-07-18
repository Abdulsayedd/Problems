    #include <bits/stdc++.h>
    using namespace std ;
    int main ()
    {
    long long n, x;
    cin >> n;
    if(n % 2 == 0)
            {
                x = n / 2;
            }
    else
            {
                x = ((n + 1) / 2) * (-1);
            }
        cout << x << endl;
    }
