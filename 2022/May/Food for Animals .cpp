    #include <bits/stdc++.h>
    #define ll long long
   // #define endl "\n"
    #define testcase int t ; cin>>t ; while(t--)
    #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;
    int main ()
    {
        pre;
        testcase
        {
            bool f= false;
            int dogfood,catfood,unifood,cats,dogs;cin>>dogfood>>catfood>>unifood>>dogs>>cats;
            if(dogfood<dogs)
            {
                unifood-=(dogs-dogfood);
            }
            if(catfood<cats)
            {
                unifood-=(cats-catfood);
            }
            if(unifood<0)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        };
    }