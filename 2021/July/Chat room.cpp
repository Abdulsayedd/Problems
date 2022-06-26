#include <bits/stdc++.h>
using namespace std;
int main()
{
        int coun=0 , countr=0;
        string x , y="hello";
        cin>>x;

            for (int j = 0 ; j<x.length();j++)
            {
                if (y[countr]==x[j])
                {
                    coun++;
                    countr++;
                }
                if (coun==5)
                {
                    break;
                }
            }

        if (coun==5)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }

}
