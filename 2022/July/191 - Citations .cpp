//https://codeforces.com/group/fazmoAU2Rw/contest/101853/problem/K
// TLE XXXXX
#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int ck(string x)
{
    if(x[0]=='a')return 1;
    else if(x[0]=='t')return 2;
    else if(x[0]=='j')return 3;
    else if(x[0]=='y')return 4;
    else if(x[0]=='v')return 5;
    else if(x[0]=='n')return 6;
    else if(x[0]=='p' && x[1]=='a')return 7;
    else return 0;
}
string fofo(string x)
{
    string y="";
    int flag=0;
    for(int i = 0 ; i <x.size() ; i++)
    {
        if(x[i]=='}')flag=0;
        if(x[i]=='{')
        {
            flag=1;continue;
        }
        if(flag==1)
        {
            y+=x[i];
        }
    }
    return y;
}
string fofo(string x,int i)
{
    vector<string>auu;
    string y="";
    int flag=0;
    for(int i = 0 ; i <x.size() ; i++)
    {
        if(x[i]=='}')
        {
            auu.push_back(y);
            break;
        }
        if(x[i]=='{')
        {
            flag=1;continue;
        }
        if(flag==0)continue;
        if(flag&&x[i]==',')
        {
            auu.push_back(y);
            i++;
            y.clear();continue;
        }
        if(flag==1)
        {
            y+=x[i];
        }
    }
    string ans="";
    for(int i = 0;i <auu.size();i++)
    {
        for(int j = 0 ; j < auu[i].size();j++)
        {
                if(j==0)ans+=auu[i][j];
                if(j==1){ans+=auu[i][j];ans+='.';ans+=' ';}
                if(auu[i][j]==' '){ans+=auu[i][j+1];break;}
        }
        if(auu.size()-1==i){ans+='.',ans+=' ';break;}
        else ans+=',',ans+=' ';
    }
    return ans;
}
int main () {
    pre;
    int t;cin>>t;
    //au=1,ti=2,jo=3,ye=4,vol=5,num=6,pag=7
    while(t--)
    {
        int n;cin>>n;
        while(n--)
        {
            string au,ti,jo,ye,vol,num,pag;
            int ff=10;
            while(ff--)
            {
                string x;
                getline(cin,x);
                int r=ck(x);
                if(r==2)
                {
                    ti=fofo(x);
                    ti+='.';
                    ti+=' ';
                }
                else if(r==3)
                {
                    jo=fofo(x);
                    jo+='.';
                    jo+=' ';
                }
                else if(r==4)
                {
                    ye=fofo(x);
                    ye+=';';
                }
                else if(r==5)
                {
                    vol=fofo(x);
                    vol+='(';
                }
                else if(r==6)
                {
                    num=fofo(x);
                    num+=')';
                    num+=':';
                }
                else if(r==7)
                {
                    pag=fofo(x);
                    pag+='.';
                }
                else if(r==1)
                {
                    au=fofo(x,0);
                }
                // author. title. journal. year;volume(number):pages.
            }
            cout<<au<<ti<<jo<<ye<<vol<<num<<pag<<"\n";
        }
    }
}