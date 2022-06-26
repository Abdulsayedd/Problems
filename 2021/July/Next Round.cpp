    #include <bits/stdc++.h>
    #define hanaka ios_base::sync_with_stdio(false) , cin.tie(0);
    using namespace std ;

    int main (){
    hanaka
    int n,k , countr=0,j=0;
    cin>>n >> k ;
    int  x[n];
    for (int i = 0 ; i<n ; i++)
    {
        cin>>x[i];
    }
     for (int i = 0 ; i < n ; i++)
     {

         if (x[i]>=x[k-1] && x[i]>0)
         {
             countr++;
         }
     }
    cout<<countr;
    }

