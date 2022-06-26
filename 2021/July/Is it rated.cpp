    #include <bits/stdc++.h>
    using namespace std ;
    int main (){
        int n ,coun1=0,f=0;
        cin>>n;
        int a[n],y[n];
        for ( int i = 0 ; i  < n ;i++)
        {
            int x[2];
            cin>>x[0]>>x[1];
            a[i]=x[0];
            if (x[0]!=x[1])
            {
                f=1;
            }
        }
        for (int i = 0 ; i <n;i++)
        {
            y[i]=a[i];
        }
        sort(y,y+n);
        reverse(y,y+n);

        for ( int i = 0 ; i < n ; i++)
        {
            if (y[i]==a[i])
            {
                coun1++;
            }
        }
        if (f==1)
        {
            cout<<"rated"<<endl;
            return 0;
        }
            if (coun1==n)
            {
                cout<<"maybe";
            }
            else
            {cout<<"unrated";}

    }
