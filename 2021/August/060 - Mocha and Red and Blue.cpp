#include <bits/stdc++.h>
#define boboo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std ;
int main (){
    boboo;
    int n ;
    cin>>n;
    while(n--)
    {
        int countrr,coun=0 ;
        cin>>countrr;
        string m ;
        cin>>m;
        if(m=="?")
        {
            cout<<"R"<<endl;
        }
        else{
        for(int i=0 ; i<countrr;i++)
        {
            if(m[i]=='?')
                coun++;
        }
        if(coun==countrr)
        {
            for(int i=0 ; i<countrr;i++)
        {
            if(i%2==0)
                m[i]='R';
                else
                m[i]='B';
        }
        }
        else{
        while(coun!=0){
        for(int i=0 ; i<countrr;i++)
        {
            if(m[i]=='?' && m[i+1]=='R')
            {
                m[i]='B';
                coun--;
            }
            else if (m[i]=='?' && m[i+1]=='B')
            {
                m[i]='R';
                coun--;
            }
            else if (m[i]=='?' && m[i+1]=='?')
            {
                continue;
            }
        }
        for(int i=countrr-1 ; i>=0;i--)
        {
            if(m[i]=='?' && m[i-1]=='R')
            {
                m[i]='B';
                coun--;
            }
            else if (m[i]=='?' && m[i-1]=='B')
            {
                m[i]='R';
                coun--;
            }
            else if (m[i]=='?' && m[i-1]=='?')
            {
                continue;
            }
        }
        }
        }
        cout<<m<<endl;



    }

    }





}
