#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main ()
{
    pre;
    int n;cin>>n;
    int arr[n];
    vector<int>v;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    stack<int>stk;
    int i = 0;
    while (i < n)
    {
        if (stk.empty() || arr[i] != stk.top())stk.push(arr[i]),i++;
        else stk.pop(),i++;
    }
    if (!stk.empty())
    {
        while (!stk.empty())
        {
            v.push_back(stk.top());
            stk.pop();
        };
    }
    reverse(v.begin(),v.end());
    cout<<v.size()<<"\n";
    for(int i = 0 ; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

}