    #include <bits/stdc++.h>
    using namespace std ;
    int main ()
    {
        int n,k,f=0;
        cin>>n;
        cin>>k;
        int x[2];
        for ( int i = 0 ; i < n  ;i ++)
        {
            cin>>x[0]>>x[1];
            if (7-k==x[0] || 7-k==x[1] || k==x[1]||k==x[0])
            {
                f=1;
            }
        }
        if (f==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
