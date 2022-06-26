#include <bits/stdc++.h>
using namespace std ;
//─█████████
int main (){
ios_base::sync_with_stdio(false) , cin.tie(0);
int n ;
long long x;
cin >>n;

for (int i=0 ; i<n ; i++)
{
    cin>>x;
    if (x>0)
    {
        cout<<1<<" ";
    }
       else if (x<0)
    {
        cout<<2<<" ";
    }
    else
    {
        cout<<0<<" ";
    }
}

}
