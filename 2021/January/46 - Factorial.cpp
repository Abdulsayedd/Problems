    #include <bits/stdc++.h>
    using namespace std ;
    //─█████████
    int main (){
    ios_base::sync_with_stdio(false) , cin.tie(0);
    unsigned long long a , b ,sum=1;
    cin>>a;
    unsigned long long arr[a];
    for (int i=0;i<a;i++)
    {
        cin>>b;
        for(int j=1;j<=b;j++)
        {
            sum=sum*j;

        }
        arr[i]=sum;
        sum=1;

    }
    for (int j=0;j<a;j++ )
    {
        cout<<arr[j]<<endl;
    }
    }
