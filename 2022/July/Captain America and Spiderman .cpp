#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fx(x) fixed<<setprecision(x)
#define split(x,ch,v) stringstream ss(x);string s; while(getline(ss,s,ch))v.push_back(s);
#define ll long long
#define ull unsigned long long
#define ld  long double
#define fx(x) fixed<<setprecision(x)
#define pb(x) emplace_back(x)
#define lower(x) for(int i=0;i<x.size();i++)x[i]|=' ';
#define upper(x) for(int i=0;i<x.size();i++)x[i]&='_';
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;
int isPrime(long long number) {

    if (number == 0 || number == 1 || (number % 2 == 0 && number > 2)) {
        return 0;
    }
    else {
        for (long long i=3; i*i <= (long long)number; i++) {
            if (number % i == 0) {
                return 0;
            }
        }
        return 1;
    }
}
int main ()
{
    pre;
    ll n,m;cin>>n>>m;
    string x,y;cin>>x>>y;
    lower(x)lower(y)
    ll sumx=0,sumy=0;
    for(char i : x)sumx+=i-'a'+1;
    for(char i : y)sumy+=i-'a'+1;
    cout<<(isPrime(sumx*sumy)?"Spiderman":"Captain America");


}