    #include <bits/stdc++.h>
    #define hanaka ios_base::sync_with_stdio(false) , cin.tie(0);
    using namespace std ;

    int main (){
    hanaka

    int n,q,i,j,y;
    cin>>n;
    int x[n+10];
    for(i=0;i<n;i++){
        cin>>x[i];
    }
    cin>>q;
    sort(x,x+n);
    for(i=0;i<q;i++){
       cin>>y;
       int ans=upper_bound(x,x+n,y)-x;
       cout<<ans<<endl;
    }
    return 0;
}

