    #include <bits/stdc++.h>
    #define hanaka ios_base::sync_with_stdio(false) , cin.tie(0);
    using namespace std ;

    int main (){
    hanaka
        unsigned long long n,x,coun=0,k=0,j;
        cin>>n>>x;
        for (int i = 1 ; i <= n ; i++)
        {
            if(x%i==0&&(x/i)<=n)
            {
                coun++;
            }
        }
        cout<<coun;
    }
