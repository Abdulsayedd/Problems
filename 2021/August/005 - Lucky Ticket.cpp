    #include <bits/stdc++.h>
    using namespace std ;
    int main ()
    {
            int n;
            cin>>n;
            while(n--)
            {
                int x;
                cin>>x;
                if(x==7 || x==4)
                {
                    cout<<"It's your lucky day."<<endl;
                    return 0;
                }
                if (n==0)
                {
                    cout<<"Tough luck!"<<endl;
                    return 0;
                }
            }
    }
