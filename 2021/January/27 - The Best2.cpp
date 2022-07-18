#include <bits/stdc++.h>
using namespace std;
//─█████████
int main()
{
long long a,b,c,d,mn;
cin>>a>>b>>c>>d;

mn=min(a,b);
mn=min(mn,c);
mn=min(mn,d);

if (a==mn && b!=mn && c!=mn && d!=mn)
{
    cout<<"A"<<endl;
}
else if (b==mn && a!=mn && c!=mn && d!=mn)
{
    cout<<"B"<<endl;
}
else if (c==mn && b!=mn && a!=mn && d!=mn)
{
    cout<<"C"<<endl;
}
else if (d==mn && a!=mn && b!=mn && c!=mn)
{
    cout<<"D"<<endl;
}
else
{
    cout<<"Equal"<<endl;
}
}
