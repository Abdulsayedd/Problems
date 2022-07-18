#include <bits/stdc++.h>
using namespace std ;
//─█████████
int main (){
       unsigned int loop=0,f=1,x, n,ans=0;
    cin>>n>>x;
    unsigned int arr[n],arr2[x];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    while (f<=x){
        for (int k=loop;k<n;k++)
        {
            if (f==arr[k]&&arr[k]!=arr[k+1])
            {
                ans++;
                loop=k+1;
                break;
            }

           else if (f==arr[k])
            {
                ans++;
            }

        }
        cout<<ans<<endl;
        ans=0;
        f++;
}
}
