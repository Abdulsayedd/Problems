    #include <bits/stdc++.h>
    using namespace std ;
    int main (){
                int n ,coun=0;
                char k;
                cin>>n>>k;

                for (int i = 0 ; i < n ;i++)
                {
                    string x;
                    cin>>x;
                    for ( int j = 0 ; j < x.size();j++)
                    {
                        if (x[i]<=k)
                        {
                            coun++;
                        }
                    }
                }
                cout<<coun/k;
    }
