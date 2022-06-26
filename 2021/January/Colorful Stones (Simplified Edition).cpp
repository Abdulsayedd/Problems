#include <bits/stdc++.h>
using namespace std ;
int main (){
ios_base::sync_with_stdio(false) , cin.tie(0);
string x,y;
int c=1,a=0;

cin >>x>>y;
for(int i=0;i<y.size();i++)
{
    if (x[a]==y[i])
    {
        a++;
        c++;
    }
}
cout <<c;

}
