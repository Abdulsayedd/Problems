#include <bits/stdc++.h>
using namespace std;
int main()
{

        string x,y;
        cin>>x;
        bool n = islower(x[0]);
        int a=0,b=0;

        for (int i = 0 ; i < x.length();i++)
        {
            bool l = isupper(x[i]);
            if(l == 1)
            {
                a++;
            }
            else
            {
                break;
            }
        }

            if(n==1)
                {
                        for (int i = 1 ; i < x.length();i++)
                        {
                            bool l = isupper(x[i]);
                            if(l == 1)
                            {
                                b++;
                            }
                            else
                            {
                                break;
                            }
                        }
                        if(b==x.length()-1)
                        {
                        x[0]=toupper(x[0]);
                        for(int i=1;i<x.length();i++)
                        {
                            x[i]=tolower(x[i]);
                        }
                        }

                }

            else if (a==x.length())
            {
                transform(x.begin(),x.end(),x.begin(),::tolower);
            }

            cout<<x;




}
