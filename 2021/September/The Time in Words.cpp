

 #include <bits/stdc++.h>
        #define ll long long
        #define ld long double
        #define ull unsigned long long
        #define pb(x) push_back(x)
        #define testcase int t ; cin>>t ; while(t--)
        #define fx(x) fixed<<setprecision(x)
        #define leadz(x) std::setfill('0') << std::setw(x)
        #define bobo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
        #define arrayn int n;cin>>n;int x[n]; for ( int i = 0 ; i < n ; i++){cin>>x[i];}
        #define tstv for(int i = 0 ; i < v.size(); i++){cout<<v[i]<<" ";}
        #define fnd(v,u) bool hh = v.find(u) != v.end();
        using namespace std ;


        ull factorial(ull n)
    {if (n == 0)
    return 1;
    else
    return n * factorial(n - 1);}

    int gcd(int a,int b)
    {if(b==0)return a;
    else return gcd(b,a%b);}

    int lcm(int a,int b)
    {return a*b/gcd(a,b);}

    string lexo(string x)
    {
    if(next_permutation(x.begin(),x.end()))
    {return x.c_str();}
    else
    {return "no answer";}
    }


    int main (){
        bobo;
        int h,m;
        cin>>h>>m;
        string h1,k1,m1;
        if(m>30)
        {
            h++;
        }
        switch (h){ //sa3a
        case 1 :
        h1="one";
        break;
        case 2 :
        h1="two";
        break;
        case 3 :
        h1="three";break;
        case 4 :
        h1="four";break;
        case 5 :
        h1="five";break;
        case 6 :
        h1="six";break;
        case 7 :
        h1="seven";break;
        case 8 :
        h1="eight";break;
        case 9 :
        h1="nine";break;
        case 10 :
        h1="ten";break;
        case 11 :
        h1="eleven";break;
        case 12 :
        h1="twelve";break;
        }
        if(m==0)
        {
            cout<<h1<<" o' clock";return 0;
        }
        switch (m)
        {
        case 1:
            m1="one minute past";break;
        case 2:
            m1="two minutes past";break;
        case 3:
            m1="three minutes past";break;
        case 4:
            m1="four minutes past";break;
        case 5:
            m1="five minutes past";break;
        case 6:
            m1="six minutes past";break;
        case 7:
            m1="seven minutes past";break;
        case 8:
            m1="eight minutes past";break;
        case 9:
            m1="nine minutes past";break;
        case 10:
            m1="ten minutes past";break;
        case 11:
            m1="eleven minutes past";break;
        case 12:
            m1="twelve minutes past";break;
        case 13:
            m1="thirteen minutes past";break;
        case 14:
            m1="fourteen minutes past";break;
        case 15:
            m1="quarter past";break;
        case 16:
            m1="sixteen minutes past";break;
        case 17:
            m1="seventeen minutes past";break;
        case 18:
            m1="eighteen minutes past";break;
        case 19:
            m1="nineteen minutes past";break;
        case 20:
            m1="twenty minutes past";break;
        case 21:
            m1="twenty one minutes past";break;
        case 22:
            m1="twenty two minutes past";break;
        case 23:
            m1="twenty three minutes past";break;
        case 24:
            m1="twenty four minutes past";break;
        case 25:
            m1="twenty five minutes past";break;
        case 26:
            m1="twenty six minutes past";break;
        case 27:
            m1="twenty seven minutes past";break;
        case 28:
            m1="twenty eight minutes past";break;
        case 29:
            m1="twenty nine minutes past";break;
        case 30:
            m1="half past";break;
        case 31:
            m1="twenty nine minutes to";break;
        case 32:
            m1="twenty eight minutes to";break;
        case 33:
            m1="twenty seven minutes to";break;
        case 34:
            m1="twenty six minutes to";break;
        case 35:
            m1="twenty five minutes to";break;
        case 36:
            m1="twenty four minutes to";break;
        case 37:
            m1="twenty three minutes to";break;
        case 38:
            m1="twenty two minutes to";break;
        case 39:
            m1="twenty one minutes to";break;
        case 40:
            m1="twenty minutes to";break;
        case 41:
            m1="nineteen minutes to";break;
        case 42:
            m1="eighteen minutes to";break;
        case 43:
            m1="seventeen minutes to";break;
        case 44:
            m1="sixteen minutes to";break;
        case 45:
            m1="quarter to";break;
        case 46:
            m1="fourteen minutes to";break;
        case 47:
            m1="thirteen minutes to";break;
        case 48:
            m1="twelve minutes to";break;
        case 49:
            m1="eleven minutes to";break;
        case 50:
            m1="ten minutes to";break;
        case 51:
            m1="nine minutes to";break;
        case 52:
            m1="eight minutes to";break;
        case 53:
            m1="seven minutes to";break;
        case 54:
            m1="six minutes to";break;
        case 55:
            m1="five minutes to";break;
        case 56:
            m1="four minutes to";break;
        case 57:
            m1="three minutes to";break;
        case 58:
            m1="two minutes to";break;
        case 59:
            m1="one minute to";break;

        }
            cout<<m1<<" "<<h1;
    }
