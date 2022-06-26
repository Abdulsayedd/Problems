#include <bits/stdc++.h>
using namespace std;


int main()
{
    int ans=0;
    string b;
    cin >> b;
    for (int i=0 ; i<b.size();i++)
        {
            if (islower(b[i]))
            {
             ans--;
            }
            else if (isupper(b[i]))
            {
                ans++;
            }

        }
        if (ans>0)
        {
            for (int k=0 ; k<b.size();k++)

            {
                b[k]=toupper(b[k]);
            }
        }
            else
        {
            for (int j=0 ; j<b.size();j++)

            {
                b[j]=tolower(b[j]);
            }
        }


    cout << b <<endl;

}
