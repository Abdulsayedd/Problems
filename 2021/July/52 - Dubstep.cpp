    #include <bits/stdc++.h>
    using namespace std ;
    int main ()
    {
            int c=0;
            string x;
            cin>>x;
            for ( int i = 0 ; i < x.size() ; i ++)
            {
                if (x[i]=='W' && x[i+1]=='U' && x[i+2]=='B')
                {
                    i++;
                    i++;
                    cout<<" ";
                }
                else
                {
                    cout<<x[i];
                }
            }
    }
