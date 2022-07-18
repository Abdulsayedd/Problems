#include <bits/stdc++.h>
using namespace std;
int main()
{
int N;
cin>>N;
    int y=N/365;
    int m=(N-(y*365))/30;
    int d=N-((y*365)+(m*30));
    cout<<y<<" "<<"years"<<"\n";
    cout<<m<<" "<<"months"<<"\n";
    cout<<d<<" "<<"days"<<"\n";
}

