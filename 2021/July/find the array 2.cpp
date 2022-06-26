#include <bits/stdc++.h>
using namespace std ;
int main (){


int x;
cin>>x;
for(int i=0;i<x;i++)
{


int s ;
cin>>s ;
int ans=0;
int sum=0;
int inc=1 ;
while (sum<s)
{
    sum+=inc;
    inc+=2;
    ans++;
}

cout<< ans << endl;
}
}
