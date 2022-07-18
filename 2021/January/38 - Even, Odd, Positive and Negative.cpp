#include <bits/stdc++.h>
using namespace std ;
//─█████████
int main (){
ios_base::sync_with_stdio(false) , cin.tie(0);
int N;
cin>>N;
long long odd=0,eve=0,pos=0,neg=0, arr[N];
for (int i=0;i<N;i++)
{
    cin>>arr[i];
}
for (int j=0;j<N;j++)
{
    if (arr[j]%2==0)
    {
        eve++;
        if (arr[j]>0)
        {
            pos++;
        }
        else if (arr[j]<0) {
            neg++;
        }
    }
    else if (arr[j]%2!=0)
    {
        odd++;
        if (arr[j]>0)
        {
            pos++;
        }
        else if (arr[j]<0) {
            neg++;
        }

    }
}
cout <<"Even: "<<eve<<endl;
cout <<"Odd: "<<odd<<endl;
cout <<"Positive: "<<pos<<endl;
cout <<"Negative: "<<neg<<endl;

}
