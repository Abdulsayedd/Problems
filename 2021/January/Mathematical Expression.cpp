#include <bits/stdc++.h>
using namespace std;
//─█████████
int main()
{
long long A,B;
long long C;
char S,Q = '=';

cin>>A>>S>>B>>Q>>C;

if (S=='+')
{
    if (C==A+B)
    {
        cout<<"Yes"<<endl;
    }
    else if (C!=A+B)
    {
        cout<<A+B<<endl;
    }
}
else if (S=='-')
{
    if (C==A-B)
    {
        cout<<"Yes"<<endl;
    }
    else if (C!=A-B)
    {
        cout<<A-B<<endl;
    }
}
else if (S=='*')
{
    if (C==A*B)
    {
        cout<<"Yes"<<endl;
    }
    else if (C!=A*B)
    {
        cout<<A*B<<endl;
    }
}


}
