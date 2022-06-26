#include <bits/stdc++.h>
using namespace std ;
int main ()
{

 long long n ;
 cin>>n;
while (n--)
{
    int coun=0;
    int a,b;
    cin>>a>>b;
    int arr[a];
    for(int j = 0; j < a; j++ ){
            cin >> arr[j];
           if(arr[j]%2!=0)
           {
               coun++;
           }
        }
        if (coun<b || coun%2 != b%2)
        {
            cout<<"No"<<endl;
            continue;
        }
        else
        {
            cout<<"Yes"<<endl;
            int momo=0;
            if(b>1)
            {
               for(int i = 0; i<a; i++){
                    if(arr[i]%2==1){
                        cout<<i+1<<" ";
                        momo++;
                    }
                    if(momo==(b-1)){
                        break;
                    }
            }
        }
        cout<<a<<endl;

}

}
}
