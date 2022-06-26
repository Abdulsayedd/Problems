#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    int t;cin>>t;
    while(t--)
    {
        string x;cin>>x;
        int xc=0;
        vector<string>v;
        for(int i = 0 ; i < 12 ; i++)
        {
            if(x[i]=='X')xc++;
        }
        if(xc>0)v.emplace_back("1x12");
        for(int i = 0 ; i < 6 ;i++)
        {
            if(x[i]=='X' && x[i+6]=='X'){v.emplace_back("2x6");break;}
        }
        for(int i = 0 ; i < 4 ;i++)
        {
            if(x[i]=='X' && x[i+4]=='X' && x[i+8]=='X'){v.emplace_back("3x4");break;}
        }
        for(int i = 0 ; i < 3 ;i++)
        {
            if(x[i]=='X' && x[i+3]=='X' && x[i+6]=='X' && x[i+9]=='X'){v.emplace_back("4x3");break;}
        }
        for(int i = 0 ; i < 2 ;i++)
        {
            if(x[i]=='X' && x[i+2]=='X' && x[i+4]=='X' && x[i+6]=='X'  && x[i+8]=='X' && x[i+10]=='X'){v.emplace_back("6x2");break;}
        }
        if(xc==12)v.emplace_back("12x1");
        cout<<v.size()<<" ";
        for(auto i : v)cout<<i<<" ";
        cout<<"\n";
    }
}