#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,t,c=1;
    cin>>n>>t;
    while(c!=0){
        if(n==1&&t==10)
            cout<<"-1";
        else if(n>=2&&t==10)
        {
            for(i=1;i<n;i++){
                cout<<"1";
            }
            cout<<"0";
        }
        else
        {
            for(i=1;i<=n;i++){
                cout<<t;
            }
            cout<<endl;
        }
        c--;
    }
}
