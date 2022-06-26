#include <bits/stdc++.h>
using namespace std;
//mohammed elgamd a7aaaaaaaaaaaaa
//valorant code xD lol lmao haha
//eksmksms

int main()
{
    ios_base::sync_with_stdio(false) , cin.tie(0);
     set <int> z;
     set <int> l;
    int num,x,y,ans=0,ans2=0,ans3=0;
     int arr [8];
    for (int i=1;i<=8;i++)
    {
        cin >> arr [i];
    }
    cin >> num;
    for (int k=0; k<num ; k++)
    {
        cin >> x >> y;
         l.insert(max (arr[x],arr[y]));
        z.insert (x);
        z.insert (y);

    }
          for (auto z : z)
        {
          ans2+=z;
         cout << z ;

}
       ans3=36-ans2;
    l.insert(arr[ans2]);
      for (auto l : l)
        {
          ans+=l;


}
cout << ans << endl;








}
