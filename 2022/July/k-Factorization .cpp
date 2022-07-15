#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
vector<int> primeFactors(int n)
{
    vector<int>s;
    while (n % 2 == 0)
    {
        s.push_back(2);
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            s.push_back(i);
            n = n/i;
        }
    }
    if (n > 2)
        s.push_back(n);
    return s;
}
int main () {
    pre;
    int n,m;cin>>n>>m;
    vector<int>v= primeFactors(n);
    if(v.size()<m){cout<<-1;return 0;}
    int sum=1;
    for(int i=0;i<m-1;i++)cout<<v[i]<<" ";
    for(int i = m-1 ; i < v.size() ; i++)sum*=v[i];
    cout<<sum;
}