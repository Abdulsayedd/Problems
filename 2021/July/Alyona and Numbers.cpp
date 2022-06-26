    #include <bits/stdc++.h>
    using namespace std ;
    int main ()
    {
  long long a,b,i,sum=0;
    cin>>a>>b;
    for(i=1;i<=a;i++)
        sum+=(b+(i%5))/5;
  cout<<sum<<endl;

    }
