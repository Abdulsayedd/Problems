#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
vector<ll>spiral(vector<vector<ll> >& matrix)
{
    ll m = matrix.size(), n = matrix[0].size();
    vector<ll> ans;
    if (m == 0)
        return ans;
    vector<vector<bool> > seen(m, vector<bool>(n, false));
    ll dr[] = { 0, 1, 0, -1 };
    ll dc[] = { 1, 0, -1, 0 };
    ll x = 0, y = 0, di = 0;
    for (ll i = 0; i < m * n; i++) {
        ans.push_back(matrix[x][y]);
        seen[x][y] = true;
        ll newX = x + dr[di];
        ll newY = y + dc[di];
        if (0 <= newX && newX < m && 0 <= newY && newY < n
            && !seen[newX][newY]) {
            x = newX;
            y = newY;
        }
        else {
            di = (di + 1) % 4;
            x += dr[di];
            y += dc[di];
        }
    }
    return ans;
}

int main (){
        pre;
        vector<vector<ll>>v;
        ll n,m;cin>>n>>m;
        for(ll i = 0 ; i < n ; i++)
        {
            vector<ll>p;
            for(int j = 0 ; j < m ; j++)
            {
                ll h ;cin>>h;
                p.push_back(h);
            }
            v.push_back(p);
        }
        for(ll i : spiral(v))
        {
            cout<<i<<" ";
        }
    }