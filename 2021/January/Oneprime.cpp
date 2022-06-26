#include <bits/stdc++.h>
using namespace std ;
//─█████████
int main (){
ios_base::sync_with_stdio(false) , cin.tie(0);

unsigned long long X,i;
int h=1;
cin>>X;
for (i=2;i<X-1;i++)
{
    if (X%i!=0)
    {
        continue;
    }
    else
    {
        h=0;
    }

}
if (h==0)
{
    cout<<"NO";
}
else
{
    cout<<"YES";
}
}
