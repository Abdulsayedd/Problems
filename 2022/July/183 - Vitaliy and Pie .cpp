// https://codeforces.com/contest/525/problem/A
#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int main () {
    pre;
    int keys=0;
    int n;cin>>n;
    string x;cin>>x;
    int arr[26]={};
    for(int i = 0 ; i < x.size() ; i++)
    {
        if(isupper(x[i]))
        {
            if(arr[(x[i]|' ')-'a'])
            {
                arr[(x[i]|' ')-'a']--;
            }
            else keys++;
        }
        else arr[x[i]-'a']++;
    }
    cout<<keys<<"\n";
}