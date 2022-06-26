    #include <bits/stdc++.h>
    #include <iostream>
    #include <string>
    #define hanaka ios_base::sync_with_stdio(false) , cin.tie(0);
    using namespace std ;

    int main (){
    hanaka
    int coun=0;
        string x,y;
        cin>>x;
        cin>>y;
        transform(x.begin(),x.end(),x.begin(),::tolower);
        transform(y.begin(),y.end(),y.begin(),::tolower);

            if(x>y)
            {
                cout<<"1";
            }
            else if (y>x)
            {
                cout<<"-1";
            }
            else
            {
                cout<<"0";
            }

    }
