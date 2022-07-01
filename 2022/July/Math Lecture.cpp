#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int summ(int n)
{
    int sum=0;
    while(n)
    {
        sum+=n%10;n/=10;
    }
    return sum;
}

int main ()
{
    pre;
    int t;cin>>t;
    while(t--)
    {
        int n,m,sum=0;cin>>n>>m;
        sum=summ(n);
        while(m--)
        {
            if(sum<=9)break;
            string x = to_string(sum);
            sum -= (x[0] - '0') * 9;
        }
        cout<<sum<<"\n";
    }
}