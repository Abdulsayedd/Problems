//International Collegiate Programming Contest, Egyptian Collegiate Programming Contest (ECPC 2018)
#include <bits/stdc++.h>
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
long long const MOD=1000000007;
int main () {
    pre;
    /*
         * gpm=goals per match in last season
         * gis= goals in season
         * m=played matches
         * rem=remaining matches
         * /goals in last season = 1
         * goals in current season = 1
         * matches he played = 37 - > scored 1 goal in 37 match
         * remaining matches = 1
         * total matches = 38
         * last season goals = 38 -> this season 1 1-38 = -37/
         *
         * /goals in last season = 5
         * goals in current season = 1
         * matches he played = 1 - > scored 1 goal in 1 match
         * remaining matches = 37
         * total matches = 38
         * last season goals = 5*38=190 -> this season 1 1-190 = -189/
         *
         * /goals in last season = 1
         * goals in current season = 0
         * matches he played = 1 - > scored 0 goal in 1 match
         * remaining matches = 0
         * total matches = 1
         * last season goals = 1*1=1 -> this season 1 1-1 = 0 -> no-answer/
         *
         * /goals in last season = 2
         * goals in current season = 6
         * matches he played = 1 - > scored 6 goal in 1 match
         * remaining matches = 2
         * total matches = 3
         * last season goals = 2*3=6 -> this season 6 6-2 = 4 -> no-answer/
         *
         * a=goals_in_match_last_season;
         * b=current_goals;
         * c=played_matches;
         * d=remainig_matches;
         * e=total_matches_per_season;
         * f=last_season_goals;
         */
    freopen ("mosalah.in","r", stdin);
    int t;cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int e=c+d;
        int f=a*e;
        if(d==0 && f > b)cout<<-1;
        else if(b>f)cout<<0;
        else cout<<f-b;
        cout<<"\n";
    }
}