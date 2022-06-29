#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    double n1,n2,mps1,mps2,m1,m2;
    string x;
    cin>>x>>n1>>x>>x>>x>>mps1>>x>>x>>x>>x>>x>>x>>x>>m1>>x>>x>>n2>>x>>x>>x>>mps2>>x>>x>>x>>x>>x>>x>>x>>m2>>x;
    m1=400-m1;m2=400-m2;
    m2/m1<=mps2/mps1?cout<<"Runner "<<n2<<" wins":cout<<"Runner "<<n1<<" wins";
}