#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ind_set;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define ull unsigned long long
#define ld  long double
priority_queue<ll,vector<ll>,greater<ll>>q;vector<ll>v;set<ll>s;multiset<ll>m_s;map<ll,ll>mp;
#define fx(x) fixed<<setprecision(x)
#define split(x,ch,v) stringstream ss(x);string s; while(getline(ss,s,ch))v.push_back(s);
#define fx(x) fixed<<setprecision(x)
#define pb(x) emplace_back(x)
#define lower(x) for(int i=0;i<x.size();i++)x[i]|=' ';
#define upper(x) for(int i=0;i<x.size();i++)x[i]&='_';
const double PI = 3.14159265358979323846;
const int MAX = 256;
long long int fact(int n)
{
    long long int res = 1;
    for (int i = 2; i <= n; i++)
        res*=i;
    return res;
}
int countPalinPermutations(string &str)
{
    int n = str.length();
    int freq[MAX] = { 0 };
    for (int i = 0; i < n; i++)
        freq[str[i]]++;
    long long int res = fact(n / 2);
    bool oddFreq = false;
    for (int i = 0; i < MAX; i++) {
        int half = freq[i] / 2;
        if (freq[i] % 2 != 0) {
            if (oddFreq == true)
                return 0;
            oddFreq = true;
        }
        res = res / fact(half);
    }
    return res;
}

int main (){
         pre;
         int t;cin>>t;
         while(t--)
         {
            int n;cin>>n;
            string x;cin>>x;
            cout<<countPalinPermutations(x)<<"\n";
         }
}