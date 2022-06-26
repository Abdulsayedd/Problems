    #include <bits/stdc++.h>
    using namespace std ;
    int main ()
    {
        int a,b,coun=0;
        cin>>a>>b;
        for (int i = 0 ; i < a ; i++)
        {
            string x[b];
            for ( int j = 0 ; j< b ; j++)
            {
                cin>>x[j];

            if (x[j]=="C" || x[j]=="M" || x[j]=="Y")
            {
                coun++;
            }
            }
        }
        if( coun > 0)
            {
                cout<<"#Color"<<endl;
            }
            else
            {
            cout<<"#Black&White"<<endl;
            }
    }
