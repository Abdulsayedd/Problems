#include <bits/stdc++.h>
using namespace std;
int main()
{
        string x;
        cin>>x;
        int temp;
        for ( int i = 2 ; i< x.length() ; i+=2)
        {
            for ( int j = 0 ; j<i ; j+=2)
            {
                if (x[j] > x[i])
                {
                    temp=x[j];
                    x[j]=x[i];
                    x[i]=temp;
                }
            }
        }
        cout<<x;
}
