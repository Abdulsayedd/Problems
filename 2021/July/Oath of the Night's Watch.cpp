#include <bits/stdc++.h>
using namespace std;
int main() {
        int n,coun=0,max1,min1;
        cin>>n;
        int x[n];
        for ( int i = 0  ; i < n ; i ++)
        {
            cin>>x[i];
        }
        sort(x,x+n);
        max1=x[n-1];
        min1=x[0];
        for(int i = 0 ; i < n ; i ++)
        {
            if (x[i]<max1 && x[i]>min1 )
            {
                coun++;
            }
        }
        cout<<coun;

}
