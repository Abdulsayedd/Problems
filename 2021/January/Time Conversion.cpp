#include <bits/stdc++.h>
using namespace std;
//mohammed 3la el beeeeat

int main()
{
    int N,h,m,s;
    cin >> N;
    if (N>=3600)
{
     h=N/3600;
     m=(N-(h*3600))/60;
     s=(N-(h*3600))-(m*60);
     cout << h << ":" << m << ":" << s;
}
else if (N<3600)
{
     h=0;
     m=(N/60);
     s=(N-(m*60));
     cout << h << ":" << m << ":" << s;
}
else if (N<60)
{
    h=0;
    m=0;
    s=N;
         cout << h << ":" << m << ":" << s;
}
}
