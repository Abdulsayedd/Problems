#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    int t;cin>>t;
    bool f = true;
    vector<int>v;
    while(t--)
    {
        int n;cin>>n;
        string x="";
        while(n!=0)
        {
            if(n%3==2){f = false;break;}
            v.push_back(n%3);
            n/=3;
        }
        stringstream ss;
        copy( v.begin(), v.end(), ostream_iterator<int>(ss, ""));
        string s = ss.str();
        reverse(s.begin(),s.end());
        unsigned long long m = bitset<64>(s).to_ullong();
//        cout<<s<<"\n";
        !f?cout<<-1<<"\n":cout<<m<<"\n";
        v.clear();
    }

}