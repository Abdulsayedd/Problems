#include <bits/stdc++.h>
using namespace std ;
//─█████████
int main (){
 int N,x,sum1=0,sum2=0;
cin>>N;
int arr[N][N];

for (int i=0 ; i<N;i++)
{
    for(int j=0; j<N ; j++)
    {
       cin>>arr[i][j];
    }
}
for (int k=0 ; k<N ;k++)
{
sum1+=arr[k][k];
}

for(int h=0 ; h<N ; h++)
{
 for (int b=N-1 ; b>=0 ;b--)
{
       sum2+=arr[h][b];
       h++;
}
}

cout<<abs(sum1-sum2);

}
