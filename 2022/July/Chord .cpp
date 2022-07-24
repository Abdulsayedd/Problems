#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int main () {
    pre;
    string arr[30]={"","C","C#","D","D#","E",
                    "F","F#","G","G#","A","A#",
                    "B"};
    map<string,int>mp;
    for(int i = 1 ; i <= 12 ; i++)
    {
        mp[arr[i]]=i;
    }
    int n;cin>>n;
    while(n--)
    {
        string x,y,z;cin>>x>>y>>z;
        if(mp[x]<=mp[y] && mp[y]<=mp[z])
        {
            if(mp[y]-mp[x]==3 && mp[z]-mp[y]==4)
            {
                cout<<"Minor triad"<<"\n";
                continue;
            }
            else if(mp[y]-mp[x]==4 && mp[z]-mp[y]==3)
            {
                cout<<"Major triad"<<"\n";
                continue;
            }
            else
            {
                cout<<"Dissonance"<<"\n";
                continue;
            }
        }
        else if(mp[x]<=mp[y]&&mp[y]>mp[z])
        {
            if(mp[y]-mp[x]==3 && (mp[z]+12)-mp[y]==4)
            {
                cout<<"Minor triad"<<"\n";
                continue;
            }
            else if(mp[y]-mp[x]==4 && (mp[z]+12)-mp[y]==3)
            {
                cout<<"Major triad"<<"\n";
                continue;
            }
            else
            {
                cout<<"Dissonance"<<"\n";
                continue;
            }
        }
        else if(mp[x]>mp[y]&&mp[y]<=mp[z])
        {
            if((mp[y]+12)-mp[x]==3 && mp[z]-mp[y]==4)
            {
                cout<<"Minor triad"<<"\n";
                continue;
            }
            else if((mp[y]+12)-mp[x]==4 && mp[z]-mp[y]==3)
            {
                cout<<"Major triad"<<"\n";
                continue;
            }
            else
            {
                cout<<"Dissonance"<<"\n";
                continue;
            }
        }
        else if(mp[x]>mp[y]&&mp[y]>mp[z])
        {
            if((mp[y]+12)-mp[x]==3 && (mp[z]+12)-mp[y]==4)
            {
                cout<<"Minor triad"<<"\n";
                continue;
            }
            else if((mp[y]+12)-mp[x]==4 && (mp[z]+12)-mp[y]==3)
            {
                cout<<"Major triad"<<"\n";
                continue;
            }
            else
            {
                cout<<"Dissonance"<<"\n";
                continue;
            }
        }
    }

}