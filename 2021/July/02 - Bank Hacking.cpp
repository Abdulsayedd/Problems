#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std ;
int main ()
{
    int k;
    cin >> k;
    char tempp;
    string n ;
    cin >> n;

    for (int i = 0 ; i < k-1 ; i++)
    {
        for (int j = i+1 ; j < k ; j++)
        {
            if (n[i]<n[j])
            {
                tempp = n[i];
                n[i] = n[j];
                n[j]= tempp;
            }
        }
    }

    int x = stoi(n);
    cout<<x*2;



}
