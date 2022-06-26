#include <bits/stdc++.h>
#include <stdlib.h>
#define ll long long
#define ld long double
#define ull unsigned long long
#define pb(x) push_back(x)
#define endl "\n"
#define testcase int t ; cin>>t ; while(t--)
#define testcase2 int t2 ; cin>>t2 ; while(t2--)
#define fx(x) fixed<<setprecision(x)
#define leadz(x) std::setfill('0') << std::setw(x)
#define bobo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define arrayn int n;cin>>n;int x[n]; for ( int i = 0 ; i < n ; i++){cin>>x[i];}
#define tstv for(int i = 0 ; i < v.size(); i++){cout<<v[i]<<" ";}
#define tstv1 for(int i = 0 ; i < v1.size(); i++){cout<<v1[i]<<" ";}
#define fnd(v,u) bool hh = v.find(u) != v.end();
//=======================================================
using namespace std ;
ull factorial(ull n)
{if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);}
int gcd(int a,int b)
{if(b==0)return a;
    else return gcd(b,a%b);}
int lcm(int a,int b)
{return a*b/gcd(a,b);}
string lexo(string x)
{
    if(next_permutation(x.begin(),x.end()))
    {return x.c_str();}
    else
    {return "no answer";}
}
bool bigsort(string a, string b){
    return a.length() == b.length() ? a < b : a.length() < b.length();
}
bool isPrime(unsigned long long m)
{
        if (m <= 1)
            return false;
        else if (m==2||m==3)
            return true;
        else if (m % 2 == 0 || m % 3 == 0)
            return false;
        for (unsigned long long i = 5; i * i <= m; i=i+6)
            if (m % i == 0 || m % (i + 2) == 0)
                return false;
        return true;
}
string decToHexa(int n)
{
    string s; char c[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    while(n)
    {s+= (char)c[n%16];n/=16;}
    reverse(s.begin(),s.end());return s;
}
ll binaryleft(ll h,int n,int arr[])
{
    int st=-1, end=n,m;
    while(st+1<end)
    {
        m=(end+st)/2;
        if(arr[m]<=h)
            st=m;
        else
            end=m;
    }
    return (st+1);
}
ll binaryright(ll h,int n,int arr[])
{
    int st=-1, end=n,m;
    while(st+1<end)
    {
        m=(end+st)/2;
        if(arr[m]<h)
            st=m;
        else
            end=m;
    }
    return (end+1);
}
bool isSubset(int arr1[], int n,int arr2[], int m) {
    set<int> s;
    for (int i = 0; i < m; i++)
        s.insert(arr2[i]);
    for (int i = 0; i < n; i++) {
        if (s.find(arr1[i]) == s.end())
            return false;
    }
    return true;
}
int getPairs_sum_Count(int arr[], int n, int k)
{ unordered_map<int, int> m;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (m.find(k - arr[i]) != m.end())
            count += m[k - arr[i]];
        m[arr[i]]++;
    }
    return count;
}
void Rngsmqwre()
{
    ll n,q;
    cin>>n>>q;
    ll arr[n+1]{0};
    for(ll i = 0 ; i < n ;i++)
    {
        ll n1;cin>>n1;
        arr[i+1]=arr[i]+n1;
    }
    for(ll i = 0 ; i < q ; i++)
    {
        ll h,h1;
        cin>>h>>h1;
        cout<<arr[h1]-arr[h-1]<<endl;
    }
}
bool sortbysec(const pair<int,int> &a,
               const pair<int,int> &b)
{
    return (a.second < b.second);
}
//=======================================================
int main () {
    bobo;
    string x;cin>>x;
    int ff=x.size();
    unordered_map<char,int>arr;
    vector<pair<char,int>>v;
    int maxx=0;
    int sum=0;
    bool f;
    for(int i = 0  ; i < x.size() ; i++)
    {
        arr[x[i]]++;
        maxx=max(arr[x[i]],maxx);
    }
    sum=x.size()-maxx;
    if(sum>=maxx-1 && arr['h']==0 )f=true;
    else f=false;
    if(!f){cout<<"impossible";return 0;}
    //a 2 , b 2
    for(auto i : arr)//aabb
    {
        v.push_back({i.first,i.second});
    }
    sort(v.begin(),v.end(), sortbysec);
//    for(auto i : v)
//        cout<<i.first<<" "<<i.second<<endl;
    stack<pair<char,int>>s;
    for(int i = 0 ; i < v.size() ; i++)
    {
        s.push({v[i].first,v[i].second});
    }
//    while(!s.empty())
//    {
//        cout<<s.top().first<<" "<<s.top().second<<endl;
//        s.pop();
//    }
    string sx="";
    while(!s.empty())
    {
        pair<char,int>s1,s2;
        s1=s.top();s.pop();
        s2=s.top();s.pop();
        if(s1.second==1 && s2.second==0)
        {
            sx+=s1.first;
        }
        if(s1.second==0 && s2.second==1)
        {
            sx+=s2.first;
        }
        int minn=min(s1.second,s2.second);
        for(int i = 0 ; i < minn ; i++)
        {
            if(sx[sx.size()-1]==s1.first)
            {sx+=s2.first;
            sx+=s1.first;}
            else
            {sx+=s1.first;sx+=s2.first;}
            s1.second--;s2.second--;
        }
        if(sx.size() == x.size())
        {
            cout<<sx;return 0;
        }
        if(s1.second==0)
        {
            s.push(s2);
        }
        else if(s2.second==0)
        {
            s.push(s1);
        }
        if(s.top().second==0)
        {
            s.pop();
        }
    }



}
