    #include <bits/stdc++.h>
    using namespace std ;
    int main (){
            int n ,coun=0,coun1=0;
            cin>>n;
            string x[n],y,z;
            for ( int i = 0 ; i < n ; i ++)
            {
                cin>>x[i];
            }
            y=x[0];
            for ( int i = 0 ; i < n ; i ++)
            {
                if (y==x[i])
                {
                    coun++;
                }
                else
                {
                    z=x[i];
                    coun1++;
                }
            }
            if (coun>coun1)
            {
                cout<<y<<endl;
            }
            else
            {
                cout<<z<<endl;
            }

    }
