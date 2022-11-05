#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;using namespace std;
typedef     tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ind_set;
#define     pre                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define     int                 long long
#define     itn                 long long
#define     ull                 unsigned long long
#define     all(x)              (x).begin(),(x).end()
#define     rall(x)             (x).rbegin(),(x).rend()
#define     fx(x)               fixed<<setprecision(x)
#define     split(x, ch, v)     stringstream ss(x);string s; while(getline(ss,s,ch))v.push_back(s);
#define     lower(x)            for(int i=0;i<x.size();i++)x[i]|=' ';
#define     upper(x)            for(int i=0;i<x.size();i++)x[i]&='_';
#define     what(x)             cout << #x << " is " << x << endl;
#define     arr2d(arr, m, n)    for(int mm=0;mm<m;mm++){for(int nn=0;nn<n;nn++)cout<<arr[mm][nn]<<" ";cout<<'\n';}
#define     PI                  acos(-1)
const int MOD =1e9+7,SIZ5=1e5+7,SIZ3=1e3+7;
double minDistance(pair<double,double> A, pair<double,double> B, pair<double,double> E)
{
    pair<double, double> ab;
    ab.first = B.first - A.first;
    ab.second = B.second - A.second;
    pair<double, double> be;
    be.first = E.first - B.first;
    be.second = E.second - B.second;
    pair<double, double> ae;
    ae.first = E.first - A.first;
    ae.second = E.second - A.second;
    double AB_BE, AB_AE;
    AB_BE = (ab.first * be.first + ab.second * be.second);
    AB_AE = (ab.first * ae.first + ab.second * ae.second);
    double reqAns = 0;
    if (AB_BE > 0) {
        double y = E.second - B.second;
        double x = E.first - B.first;
        reqAns = sqrt(x * x + y * y);
    }
    else if (AB_AE < 0) {
        double y = E.second - A.second;
        double x = E.first - A.first;
        reqAns = sqrt(x * x + y * y);
    }
    else {
        double x1 = ab.first;
        double y1 = ab.second;
        double x2 = ae.first;
        double y2 = ae.second;
        double div = sqrt(x1 * x1 + y1 * y1);
        reqAns = abs(x1 * y2 - y1 * x2) / div;
    }
    return reqAns;
}
signed main (){
    pre;

    double a,b, x1,y1,x2,y2;
    cin>>a>>b>>x1>>y1>>x2>>y2;
    pair<int,int>l1,l2,l3,l4,point;
    l3={x1,y1};
    l4={x2,y1};
    l2={x2,y2};
    l1={x1,y2};
    point={a,b};
    cout<<fx(3)<<min({minDistance(l3,l4,point),minDistance(l3,l1,point),minDistance(l1,l2,point),minDistance(l2,l4,point)});

}