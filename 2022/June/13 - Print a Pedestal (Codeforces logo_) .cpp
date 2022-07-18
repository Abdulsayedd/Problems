#include <bits/stdc++.h>
#define testcase int t;cin>>t;while(t--)
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    //freopen ("pizza.in","r", stdin);
    pre;
    testcase {
        int n;
        cin >> n;
        int m=n;
        int s1,s2,s3;
        s1=s2=s3=n/3;
        if(n%3==0){s2++;s3--;}
        else if(n%3==2){s2+=2;s1++;s3--;}
        else if(n%3==1){s2+=2;s3--;}
        cout<<s1<<" "<<s2<<" "<<s3<<"\n";
    }
}