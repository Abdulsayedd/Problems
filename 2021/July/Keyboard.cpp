    #include <bits/stdc++.h>
    using namespace std ;
    int main (){
        char m;
        cin>>m;
        string x,l = "qwertyuiopasdfghjkl;zxcvbnm,./";
        cin>>x;
            if (m=='R')
            {
                for ( int i = 0 ; i < x.size();i++)
                {
                    for (int j = 0 ; j<l.size() ; j++)
                    {
                        if (x[i]==l[j])
                        {
                            cout<<l[j-1];
                        }
                    }
                }
            }
            else
            {
                for ( int i = 0 ; i < x.size();i++)
                {
                    for (int j = 0 ; j<l.size() ; j++)
                    {
                        if (x[i]==l[j])
                        {
                            cout<<l[j+1];
                        }
                    }
                }
            }
    }
