    #include <bits/stdc++.h>
    using namespace std ;
    int main (){

     int x ,cl =0, cr =0;
     cin>>x;
     int arr[x];
        for(int i = 0 ; i<x ;i++)
        {
            cin>>arr[i];
        }
        int n ;
        cin>>n;
        int a , b ;
        for(int i = 0 ; i<n ;i++)
        {
            cin>>a>>b;
            if (a==1)
            {
                cr=arr[a-1]-b;
                cl=b-1 ;
                arr[a]+=cr ;
                arr[a-1]=0 ;
            }
            else if (a==x){
                cl=b-1;
                cr=arr[a-1]-b;
                 arr[a-2]+=cl;
                 arr[a-1]=0 ;
            }
            else
            {
                cl=b-1;
                cr=arr[a-1]-b;
               arr[a]+=cr ;
               arr[a-2]+=cl;
                arr[a-1]=0 ;

            }

        }
        for(int w = 0 ; w<x ;w++)
        {
            cout<<arr[w]<<endl;
        }
    }
