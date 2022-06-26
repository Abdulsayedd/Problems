#include <bits/stdc++.h>
#define bobo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main (){
    bobo;
    int n ,cnt=0 ;
    cin>>n;
    string arr[n];
    for(int i =0; i<n ; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i =0; i<n ; i++)
    {
        if(arr[i]!=arr[i+1])
        {
            cnt++;
        }
    }
        cout<<cnt;
                int f=0;
    int x[cnt]{0};
    string y[cnt];
    int coun=1;
    for ( int i = f ; i < n ;i++)
    {
                for ( int j = i+1 ; j < n ; j++)
                {
                    if(arr[i]==arr[j])
                {
                    coun++;
                    f++;
                }
                else
                {
                    break;
                }
                }
                x[i]=coun;
                coun=0;
                y[i]=arr[i];
    }
}
