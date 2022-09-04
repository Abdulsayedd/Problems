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
#define lin cout<<"\n";
const double PI = 3.14159265358979323846;
const int MOD = 1000000007;
string add(string x, string y)
{
    if (x.length() > y.length())swap(x, y);
    string ans = "";
    int n1 = x.length(), n2 = y.length(),diff=n2-n1,carry=0;
    for (int i=n1-1; i>=0; i--)
    {
        int sum = ((x[i]-'0') +(y[i+diff]-'0') +carry);
        ans+=(sum%10 + '0');
        carry = sum/10;
    }
    for (int i=n2-n1-1; i>=0; i--)
    {
        int sum = ((y[i]-'0')+carry);
        ans+=(sum%10 + '0');
        carry = sum/10;
    }
    if (carry)ans+=(carry+'0');
    reverse(ans.begin(), ans.end());
    return ans;
}
string mul(string num1, string num2)
{
    int len1 = num1.size();
    int len2 = num2.size();
    if (len1 == 0 || len2 == 0)
        return "0";
    vector<int> result(len1 + len2, 0);
    int i_n1 = 0;
    int i_n2 = 0;
    for (int i=len1-1; i>=0; i--)
    {
        int carry = 0;
        int n1 = num1[i] - '0';
        i_n2 = 0;
        for (int j=len2-1; j>=0; j--)
        {
            int n2 = num2[j] - '0';
            int sum = n1*n2 + result[i_n1 + i_n2] + carry;
            carry = sum/10;
            result[i_n1 + i_n2] = sum % 10;
            i_n2++;
        }
        if (carry > 0)result[i_n1 + i_n2] += carry;
        i_n1++;
    }
    int i = result.size() - 1;
    while (i>=0 && result[i] == 0)
        i--;
    if (i == -1)
        return "0";
    string s = "";
    while (i >= 0)s+=to_string(result[i--]);
    return s;
}
signed main (){
    pre;
    string x;cin>>x;
    cout<<add(x,"9999")<<"\n"<<mul(x,"9999");
}