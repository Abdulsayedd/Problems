#include <bits/stdc++.h>
using namespace std ;
//─█████████
int main (){
unsigned int N,M,x,l=0;
cin>>N>>M;
unsigned int arr[N][M];

for (int i=0 ; i<N;i++)
{
    for(int j=0; j<M ; j++)
    {
       cin>>arr[i][j];
    }
}
cin>>x;

for (int k=0 ; k<N;k++)
{
    for(int o=0; o<M ; o++)
    {
       if (x==arr[k][o])
       {

           l++;
           break;
       }

    }
}
if (l==0)
{
    cout<<"will take number";
}
else
{
   cout<<"will not take number";

}



}
