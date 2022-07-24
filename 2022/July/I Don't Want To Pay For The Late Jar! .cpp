#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int main () {
    pre;
    long long d,n,s,f,t,c=0,mx,p;
    cin>>d;
    while(d--)
    {
        /*
         * break 5
         * pay 3 and rest 3 ? rest bonus -> max payment = 3
         * 3 is not enough ->5
         * pay 4 and rest 5? pay 4 -> max payment =4
         * cout<<4;
         * break 5
         * pay 1 and rest for 7 ? 7 <=5  But if tx>S she would save fx−(tx−S).
         * take 7-5+min(first,second)
         * -1
         */
        c++;mx=INT_MIN;
        cin>>n>>s;
        while(n--)
        {
            cin>>f>>t;
            p=t-s;
            if(t>s)f-=p;
            mx=max(mx,f);
        }
        cout<<"Case #"<<c<<":"<<" "<<mx<<"\n";
    }
    /*
     *3
     * < 2 10 >
     * 2 8
     * 4 9
     *
     * < 1 9 >
     * 40 40
     *
     * < 2 8 >
     * 40 3
     * 3 40
     *
     */
}