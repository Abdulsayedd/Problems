    #include <bits/stdc++.h>
    using namespace std ;
    int main ()
    {
       int n,coun=1,blbl=0;
       cin>>n;
       string x;
       cin>>x;
       for ( int i = 0 ; i < x.size();i++)
        {
           if (x[i]==x[i+1] && x[i]==x[i+2]&& x[i]=='x')
               {
                blbl++;
               }
        }
        cout<<blbl;
     }
