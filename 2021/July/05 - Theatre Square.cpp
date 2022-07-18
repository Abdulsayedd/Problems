    #include <bits/stdc++.h>
    #define hanaka ios_base::sync_with_stdio(false) , cin.tie(0);
    using namespace std ;

    int main (){
    hanaka
    double n , m , a ,x,y;
    long long sum;
    cin >> n >> m >> a;
        x=ceil(n/a);
        y=ceil(m/a);
        sum=x*y;
        cout<<sum;
    }
