#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
long long const MOD=1000000007;
pair<long long,long long>a_times_x_plus_b_times_y_equal_n(int n,int a,int b)
{
    long long x,y;
    pair<long long,long long>p;
    bool f = false;
    for(int i = 0 ; i <=10000000 ;i++ )
    {
        x=i;
        y=n-a*i;
        y/=b;
        if((x>0&&y>0)&&a*x+b*y==n){f=true;break;}
        //cout<<y<<"\n";
    }
    if(x>0&&y>0)return {x,y};
    return {-1,-1};
}

int main () {
    pre;
    long long n,a,b,x=0,y=0;
    cin>>n>>a>>b;
    pair<long long,long long>p= a_times_x_plus_b_times_y_equal_n(n,a,b);
    cout<<p.first<<" "<<p.second<<"\n";

    }