#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    string x,y,mps="";
    double f1,f2,s1,s2;
    getline(cin,x);
    getline(cin,y);
    for(int i = 0 ; i < x.size() ; i++)
    {
      if(x[i]=='a' && x[i+1]=='t')
      {
          i+=3;
          while(x[i]!=' ')
          {
              mps+=x[i++];
          }
          f1=stod(mps);
          mps="";
      }
        if(x[i]=='r' && x[i+1]=='e' && x[i+2]=='d')
        {
            i+=4;
            while(x[i]!=' ')
            {
                mps+=x[i++];
            }
            f2=stod(mps);
            mps="";
            break;
        }
    }
    for(int i = 0 ; i < y.size() ; i++)
    {
        if(y[i]=='a' && y[i+1]=='t')
        {
            i+=3;
            while(y[i]!=' ')
            {
                mps+=y[i++];
            }
            s1=stod(mps);
            mps="";
        }
        if(y[i]=='r' && y[i+1]=='e' && y[i+2]=='d')
        {
            i+=4;
            while(y[i]!=' ')
            {
                mps+=y[i++];
            }
            s2=stod(mps);
            mps="";
            break;
        }
    }
    f2=400-f2;s2=400-s2;
    ((f2/f1)<=(s2/s1))?cout<<"Runner 1 wins":cout<<"Runner 2 wins";
}