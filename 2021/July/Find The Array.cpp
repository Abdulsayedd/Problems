    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        cin>>n;
        for ( int i = 0 ; i < n ; i++)
        {
            int k,sum=1,coun=0,cousss=1;
            cin>>k;
            int x[k];
            x[0]=1;
            if (k==1)
            {
                cout<<1<<endl;
            }
            else
            {
                while (sum<=k)
            {
                sum+=x[coun]+2;
                coun++;
                if (sum<=k)
                {
                    x[coun]=x[coun-1]+2;
                    cousss++;
                }
                else
                {
                    x[coun]=k-sum;
                    cousss++;
                }
            }
            cout<<cousss<<endl;
            }

        }
    }
