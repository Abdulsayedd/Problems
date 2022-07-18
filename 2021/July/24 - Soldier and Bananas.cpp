#include <bits/stdc++.h>
using namespace std ;
int main (){


            int k , n , w , s1=0 ,s2;
            cin>>k>>n>>w;

            for ( int i = 1 ; i <= w ; i++)
            {
                s1+=i*k;
            }
            s2=s1-n;

            if (s2>0)
            {
                            cout<<s2;
            }
            else
            {
                cout<<0;
            }

}
