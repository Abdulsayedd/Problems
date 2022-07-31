// https://codeforces.com/group/fazmoAU2Rw/contest/101853/problem/F
#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int main () {
    pre;
    int t;cin>>t;
    while(t--)
    {
        int n,m;cin>>n>>m;
        char h;
        int h1,m1,h2,m2;
        int minutes=0;
        for(int i = 0 ; i < n ; i++)
        {
            string x;cin>>x;
            string y="";
            y+=x[0];y+=x[1];
            h1=stoi(y);
            y="";
            y+=x[3];y+=x[4];
            m1=stoi(y);
            cin>>x;
            y="";
            y+=x[0];y+=x[1];
            h2=stoi(y);
            y="";
            y+=x[3];y+=x[4];
            m2=stoi(y);
            if(m2<m1)
            {
                h2--;
                m2+=60;
            }
            minutes+=(m2-m1)+((h2*60)-(h1*60));
        }
        minutes/=60;
        cout<<(minutes>=m?"YES":"NO")<<"\n";
    }

}