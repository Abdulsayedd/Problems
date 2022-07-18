    #include <bits/stdc++.h>
    #define hanaka ios_base::sync_with_stdio(false) , cin.tie(0);
    using namespace std ;

    int main (){
    hanaka
    unsigned int x ;
    cin>>x;
    for(int i=0 ;i<x;i++)
    {

       unsigned int x,y,a,b,j,k , coun=0;
       cin>>x>>y>>a>>b>>j>>k;
          if (y==b && x==a)
       {
           cout<<0<<endl;
       }
       else {
        while (y!=b)
       {
           if (y<b)
           {
               if(y==k && x==j)
               {
                  y++;
                  coun+=3;
               }
               else
               {
               y++;
               coun++;
               }
           }
           else if (y>b)
           {
               if(y==k && x==j)
               {
                 y--;
                  coun+=3;

               }
               else
               {
               y-=1;
               coun++;
               }
           }
       }
       while (x!=a)
       {

            if (x>a)
           {
               if(y==k && x==j)
               {
                  x--;
                  coun+=3;
               }
               else
               {
               x-=1;
               coun++;
               }
           }
           else if (x<a)
           {
               if(y==k && x==j)
               {
                  x++;
                  coun+=3;

               }
               else
               {
               x+=1;
               coun++;
               }
           }
       }
    cout<<coun<<endl;

    }
    }
    }
