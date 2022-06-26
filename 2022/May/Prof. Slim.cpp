    #include <bits/stdc++.h>
    #define ll long long
   // #define endl "\n"
    #define testcase int t ; cin>>t ; while(t--)
    #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;
    int main ()
    {
        pre;
        testcase {
            int n;
            cin >> n;
            int arr[n];
            int pos = 0, neg;
            for (int i = 0; i < n; i++) {
                int h;
                cin >> h;
                if (h > 0)pos++;
                arr[i] = abs(h);
            }
            neg = n - pos;
            bool f = false;
            for (int i = 0; i < neg - 1; i++) {
                if (arr[i] < arr[i + 1]) {
                    f = true;
                }
            }
            for (int i = neg; i < n - 1; i++) {
                if (arr[i] > arr[i + 1]) {
                    f = true;
                }
            }
            f ? cout << "NO" << endl : cout << "YES" << endl;
        };
    }