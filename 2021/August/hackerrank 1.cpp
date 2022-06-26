    #include <bits/stdc++.h>
    #define super ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    #define ll long long
    #define ld long double
    #define ull unsigned long long
    #define pb(x) push_back(x)
    #define testcase int t ; cin>>t ; while(t--)
    #define fx(x) fixed<<setprecision(x)
    using namespace std ;
    int main ()
    {
        super;
        int coun=0,coun1=0;
        string x,y;
        cin>>x;
        for ( int i = 0 ; i < x.size();i++)
        {
            if (x[i]>=49 && x[i]<=57)
            {
                coun++;
            }
        }
        char m[coun];
        for ( int i = 0 ; i < coun ;i++)
        {
            m[i]=x[i];
        }
        x.erase(0,coun);
        int num=coun-1;
        for ( int i = 0 ; i < x.size();i++)
        {
            if (x[i]=='0')
            {
                x[i]=m[num];
                num--;
            }
        }
        int starcoun=0;
        for ( int i = 0 ; i < x.size();i++)
        {
            if (x[i]!='*')
            {
                if ((x[i]>=65 && x[i]<=90) && (x[i+1]>=97 && x[i+1]<=122) && x[i+2]=='*' )
                {
                    char temp;
                    temp =x[i];
                    x[i]=x[i+1];
                    x[i+1]=temp;
                }
                y+=x[i];
            }
        }
        x.erase(std::remove(x.begin(), x.end(), '*'), x.end());
        cout<<x;
        /*char star[starcoun];

        int kk=0;
        for (int i = 0 ; i < x.size();i++)
        {
            if (x[i]=='*')
            {
                star[kk]=i;
                kk++;
            }
        }*/


    }
