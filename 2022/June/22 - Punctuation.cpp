#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    //freopen ("sss.in","r", stdin);
    pre;
    string x;getline(cin,x);
    string m,h;m=h="";
    char m1=' ';
    vector<string>v;
    vector<char>vc;
    for(int i = 0 ; i < x.size() ; i++)
    {
        if(isalpha(x[i]))m+=x[i];
        else
        {
            v.push_back(m); m="";
            while(!isalpha(x[i]))
            {
                if(x[i]!=' ') m1=x[i];
                i++;
            }
            i--;
            vc.push_back(m1);m1=' ';
        }
    }
    for(int i = 0 ; i < v.size() ; i++)
    {
        if(vc[i]!=' ')cout<<v[i]<<vc[i]<<" ";
        else cout<<v[i]<<vc[i];
    }
    for(int i = x.size()-1 ; i>= 0 ; i--)
    {
        if(isalpha(x[i])) h+=x[i];
        else break;
    }
    reverse(h.begin(),h.end());
    cout<<h;
}