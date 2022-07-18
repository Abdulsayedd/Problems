    #include <bits/stdc++.h>
    using namespace std ;
    int main ()
    {
        int n;
        cin>>n;
        for (int i = 0 ; i < n ; i++)
        {
            int k;
            cin>>k;
            int m[k];
            int b[k];
            for (int j = 0 ; j < k ; j++)
            {
                int f;
                string s;
                cin>>s>>f;
                m[j]=f;
            }
            sort (m,m+k);
            for ( int o = 0 ; o < k-1 ; o++)
            {
                for (int a = o+1 ;a<k;a++)
                {
                    if (m[o]==m[a])
                    {
                        b[o]==m[o];
                    }
                }
            }
            int coun=0;
            int p[k];
            sort(b,b+k);
            for (int z=0 ; z< k ; z++)
            {
                for ( int c = 1 ; c < k  ; c++)
                {
                    if (b[z]==b[c])
                    {
                        coun++;
                        p[z]=coun;
                    }
                    coun=0;
                }
            }
            for (int kk = 0 ; kk < k ; kk++)
            {
                cout<<p[kk]<<endl;
            }


        }

    }
