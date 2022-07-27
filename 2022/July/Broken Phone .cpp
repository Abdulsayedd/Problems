#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int main ()
{
    pre;
    int h,m;cin>>h>>m;
    string arr[]={"AM","PM"};
    cout<<h%12<<" "<<m<<" "<<arr[h>=12];
}