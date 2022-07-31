#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
set <long long> factors(long long x) {
    set <long long> result;
    int i = 1;
    while(i*i <= x) {
        if(x % i == 0)
        {
            result.insert(i);
            if(x/i != i)
            {
                result.insert(x/i);
            }
        }
        i++;
    }
    return result;
}
int main () {
    pre;
    long long n;cin>>n;
    set<long long>s=factors(n);
    long long sum=0;
    for(long long i : s){if(i==n)continue;else sum+=i;}
    (sum==n)?cout<<"PERFECT NUMBER":cout<<"NOT A PERFECT NUMBER";
    cout<<"\n"<<sum;
}