    #include <bits/stdc++.h>
    using namespace std ;
    int main (){

    int x ,y  ;
     string  wrds ;
     wrds = "abcdefghijklmnopqrstuvwxyz" ;
     cin>>x>>y;

     for (int i= 0 ;i<=y ; i++)
     {
            x=x-1;
         if (i==y)
         {
             i=0;
             cout<<wrds[i];
             if(x==0)
             {
                 break ;
             }

         }
         else{
            cout<<wrds[i];
            if(x==0)
            {
                break ;
            }
         }
     }

    }
