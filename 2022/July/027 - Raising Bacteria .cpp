//============================
// Name        : A. Raising Bacteria
// Author      : Abdulsayed
// Version     : 2022
// Description : BitWise
//============================
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main () {
    pre;
    unsigned int n;cin>>n;
    cout<<bitset<32>(n).count();
}