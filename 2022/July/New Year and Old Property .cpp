//============================
// Name        : C. New Year and Old Property
// Author      : Abdulsayed
// Version     : 2022
// Description : BitWise
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    unsigned long long n,m,ans,c=0,calc;cin>>n>>m;
    unsigned long long ns=(int)log2(n)+1,ms=(int)log2(m)+1;
    for(unsigned long long i = ns ; i <=ms ; i++)
    {
        calc=(1llu<<(i))-1;// set 1 size
        for(int j = 0 ; j < i-1 ; j++)
        {
            ans=calc-(1llu<<j);//1 10 100 1000 ....
            /*bitset<64>b(calc);
            bitset<64>a(ans);
            cout<<b<<"\n"<<a;*/
            if(ans>= n && ans<=m){c++;/*cout<<"*";*/}
            /*cout<<"\n";*/
        }
    }
    cout<<c;
}