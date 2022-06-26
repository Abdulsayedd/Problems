    #include <bits/stdc++.h>
    using namespace std;
    int main()
{
    int coun=0;
    long long x;
    cin>>x;
     while (x!=0)
     {
         if (x%10==4 || x%10==7)
         {
             coun++;
         }
         x/=10;
     }
     if (coun==4 || coun==7)
     {
         cout<<"YES";
     }
     else
     {
        cout<<"NO";
     }
}

