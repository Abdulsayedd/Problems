#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fx(x) fixed<<setprecision(x)
#define split(x,ch,v) stringstream ss(x);string s; while(getline(ss,s,ch))v.push_back(s);
#define ll long long
#define ull unsigned long long
#define ld  long double
#define fx(x) fixed<<setprecision(x)
#define pb(x) emplace_back(x)
#define lower(x) for(int i=0;i<x.size();i++)x[i]|=' ';
#define upper(x) for(int i=0;i<x.size();i++)x[i]&='_';
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007;
int arr[105][105],freq[105][105];
int main (){
        pre;

        int t;cin>>t;
        while(t--)
        {
            int n,m,k;cin>>n>>m>>k;
            int sum=0;
            for(int i = 1; i<=n ; i++)
            {
                for(int j = 1 ; j <= m ; j++)
                {
                    cin>>arr[i][j];
                    freq[i][j]=arr[i][j];
                    freq[i][j]+=freq[i-1][j];
                    freq[i][j]+=freq[i][j-1];
                    freq[i][j]-=freq[i-1][j-1];
                }
            }
/*            for(int i=1;i<=n;i++)
                for(int j=1;j<=m;j++)
                    cout<<arr[i][j]<<" \n"[j==m];
            cout<<"\n\n";
            for(int i=1;i<=n;i++)
                for(int j=1;j<=m;j++)
                    cout<<freq[i][j]<<" \n"[j==m];
            cout<<"\n============\n";
            cout<<"\n============\n";*/
            int mx=-1;
            for(int i=1;i<=n;i++)
            {
                for(int j =1;j<=m;j++)
                {
                    for(int x=i;x<=n;x++)
                    {
                        for(int y=j;y<=m;y++)
                        {
                            int ans=freq[x][y]+freq[i-1][j-1]-freq[x][j-1]-freq[i-1][y];
                            if(ans<=k)
                            {
                                //cout<<"***x "<<x<<" y "<<y<<" i "<<i<<" j "<<j<<"\n";
                                int xx,yy;
                                xx=x-(i-1);
                                yy=y-(j-1);
                               /* if(xx*yy>mx)
                                {
                                    cout<<"***x "<<x<<" y "<<y<<" i "<<i<<" j "<<j<<"\n";
                                }*/
                                mx=max(mx,xx*yy);
                            }
                        }
                    }
                }
            }
            cout<<mx<<"\n";
            mx=-1;
        }
}