    #include <bits/stdc++.h>
    #define hanaka ios_base::sync_with_stdio(false) , cin.tie(0);
    using namespace std ;

    int main (){
    hanaka

    string x;
    cin>>x;
    transform(x.begin(), x.end(), x.begin(),::tolower);

    for ( int i = 0 ; i < x.length() ; i++)
    {
        if (x[i]!='o' && x[i]!='u' && x[i]!='e' && x[i]!='i' && x[i]!='a' && x[i]!='y')
        {
            cout<<"."<<x[i];
        }
    }

    }
