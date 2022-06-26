#include <bits/stdc++.h>
#define bobo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main (){
    bobo;

        long double n,k,a;
        cin>>n>>k>>a;
        long long kk=(n*k)/a;
        long double kkk=(n*k)/a;
        if (kk>2147483647 || kk<-2147483648)
        {
            if ((kkk-kk)==0)
            {
                cout<<"long long"<<endl;return 0;
            }
            else
            {
                cout<<"double"<<endl;return 0;
            }        }
        else
        {
            if ((kkk-kk)==0)
            {
                cout<<"int"<<endl;return 0;
            }
            else
            {
                cout<<"double"<<endl;return 0;
            }
        }


}
