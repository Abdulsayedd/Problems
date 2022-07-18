    #include <bits/stdc++.h>
    #define hanaka ios_base::sync_with_stdio(false) , cin.tie(0);
    using namespace std ;

    int main (){
    hanaka
        int n , countr=0;
        string k;
        cin>>n;
        for (int i = 0 ; i < n ; i++)
        {
            cin>>k;

            if (k=="++X" || k=="X++" )
            {
                countr++;
            }

            else if (k=="--X" || k== "X--")
            {
                countr--;
            }

        }
        cout<<countr;
    }

