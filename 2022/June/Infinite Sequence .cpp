#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
bool fun (int a,int b,int c)
{
    if(!c)
    {
        if(a==b)return true;
        else return false;
    }
    if((b-a)%c==0 && ((b-a))/c>=0)return true;
    else return false;
}
int main ()
{
    pre;
    int a,b,c;cin>>a>>b>>c;
    fun(a,b,c)?cout<<"YES":cout<<"NO";
}