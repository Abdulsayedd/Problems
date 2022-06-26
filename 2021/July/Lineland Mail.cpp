    #include <bits/stdc++.h>
    using namespace std ;
    int main ()
    {
        int n ;
        cin>>n;
        long long x[n];
        for (int i = 0 ; i < n ; i++)
        {
            cin>>x[i];
        }
            cout<<abs(x[0]-x[1])<< " ";
            cout<<abs(x[0]-x[n-1])<<endl;
        for ( int i = 1 ; i < n ; i ++)
        {

                if (abs(x[i]-x[i-1])<abs(x[i]-x[i+1]))
                {
                    cout<<abs(x[i]-x[i-1])<<" ";
                }
                else
                {
                    cout<<abs(x[i]-x[i+1])<<" ";
                }
                if (abs(x[i]-x[0])>abs(x[i]-x[n-1]))
                {
                    cout<<abs(x[i]-x[0])<<endl;
                }
                else
                {
                    cout<<abs(x[i]-x[n-1])<<endl;
                }
        }
        }

