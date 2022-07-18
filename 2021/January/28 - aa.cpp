#include <bits/stdc++.h>
using namespace std;
int main()
{
long long X,Y,Z;
char S,Q = '=';

cin>>X>>S>>Y>>Q>>Z;

if (S=='+')
{
    if (Z==X+Y)
    {
        cout<<"Yes"<<endl;
    }
    else if (Z!=X+Y)
    {
        cout<<X+Y<<endl;
    }
}
else if (S=='-')
{
    if (Z==X-Y)
    {
        cout<<"Yes"<<endl;
    }
    else if (Z!=X-Y)
    {
        cout<<X-Y<<endl;
    }
}
else if (S=='*')
{
    if (Z==X*Y)
    {
        cout<<"Yes"<<endl;
    }
    else if (Z!=X*Y)
    {
        cout<<X*Y<<endl;
    }
}


}
