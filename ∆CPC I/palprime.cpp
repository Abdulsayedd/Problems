#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ind_set;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define int long long
#define itn long long
#define ull unsigned long long
#define ld  long double
#define fx(x) fixed<<setprecision(x)
#define split(x,ch,v) stringstream ss(x);string s; while(getline(ss,s,ch))v.push_back(s);
#define fx(x) fixed<<setprecision(x)
#define pb(x) emplace_back(x)
#define lower(x) for(int i=0;i<x.size();i++)x[i]|=' ';
#define upper(x) for(int i=0;i<x.size();i++)x[i]&='_';
#define what(x) cerr << #x << " is " << x << endl;
const double PI = 3.14159265358979323846;
const int MOD = 1000000007;
long long fastpow(long long b, long long p) {
    if (!p) return 1;
    long long ans = fastpow(b, p >> 1);
    ans *= ans;
    if (p & 1) ans *= b;
    return ans;
}
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
signed main (){
    pre;
    int po= fastpow(2,21)+10;
    string x;
    while(cin>>x)
    {
        int n1=0;
        for(int i = x.size()-1 ; i>=0;i--)n1+=(x[i]-'0')* fastpow(2,x.size()-1-i);
        for(int i = n1 ; i<=po;i++)
        {
            if(isPrime(i))
            {
                string y="";
                int h=i;
                while(h)
                {
                    if(h&1)y+='1';
                    else y+='0';
                    h>>=1;
                }
                string z=y;
                reverse(z.begin(),z.end());
                if(z==y)
                {
                    cout<<z<<endl;
                    break;
                }
            }
        }

    }
}