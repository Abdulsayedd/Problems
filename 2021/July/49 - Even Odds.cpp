    #include <bits/stdc++.h>
    using namespace std ;
    int main ()
    {
        double o;
        unsigned long long a,b,eve=2,odd=1;
        cin>>a>>b;
        int x[a];
        o=a;
        for (int i = 0 ; i < a/2 ; i++)
        {
                x[i]=odd;
                odd+=2;
        }
        for(int i = ceil(o/2) ; i < a ; i++)
        {
            x[i]=eve;
            eve+=2;
        }
cout<<x[b-1];

    }
