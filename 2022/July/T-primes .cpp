#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int const MAXN=1000007;
bool is_prime[MAXN];
vector <int> prime;
void fun () {
    std::fill (is_prime, is_prime + MAXN, false);
    for (int i = 2; i < MAXN; ++i) {
        if (!is_prime[i]) prime.push_back (i);
        for (int j = 0; j < prime.size () && i * prime[j] < MAXN; ++j) {
            is_prime[i * prime[j]] = true;
            if (i % prime[j] == 0) break;
        }
    }
}
int main () {
    pre;
    fun();
    int n;cin>>n;
    bool f;
    for(int i = 0 ; i < n ; i++)
    {
        f=false;
        long long m;cin>>m;
        long long h1=sqrt(m);
        double h = sqrt(m);
        f=(h==h1 && is_prime[h1]==0 && h1!=1);
        f?cout<<"YES"<<"\n":cout<<"NO"<<"\n";
    }
}