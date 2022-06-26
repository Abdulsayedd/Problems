    #include <bits/stdc++.h>
    using namespace std ;
    int main ()
    {
        int n;
        cin>>n;
        for ( int i = 0 ; i < n ; i++)
        {
            int a,b,c;
            cin>> a >> b >> c ;
            if (a<b&&a<c)
            {
                cout<<"First"<<endl;
            }
            else if (b<c&&b<a)
            {
                cout<<"Second"<<endl;
            }
            else if (c<b && c<a)
            {
                cout<<"Third"<<endl;
            }
        }
    }
