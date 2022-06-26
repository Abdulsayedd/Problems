        #include <bits/stdc++.h>
        using namespace std ;
        int main ()
        {
            int t;
            cin>>t;
            while (t--)
            {
                int x,y,sum=0;
                cin>>x>>y;
                int minn=min(x,y),maxx=max(x,y);
                for (int i = minn+1 ; i < maxx ; i++)
                {
                    if (i%2!=0)
                    {
                        sum+=i;
                    }
                }
                cout<<sum<<endl;

            }

        }
