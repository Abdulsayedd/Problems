    #include <bits/stdc++.h>
    #include <iostream>
    #include <string>
    using namespace std ;
    int main ()
    {
        int n;
        cin>>n;
        while(n--)
        {
            int x,y,coun=0;
            cin>>x>> y;
            while (x--)
            {
                int hs,he,ms,me,hsmnt,hemnt;
                string a,b,a1="00",b1="00",a2="00",b2="00";
                cin>>a>>b;
                a1[0]=a[0];
                a1[1]=a[1];
                b1[0]=a[3];
                b1[1]=a[4];
                a2[0]=b[0];
                a2[1]=b[1];
                b2[0]=b[3];
                b2[1]=b[4];
                hs = stoi(a1);
                he = stoi(a2);
                ms = stoi(b1);
                me = stoi(b2);
                hsmnt = hs*60;
                hemnt = he*60;
                if(ms>me)
                {
                    coun+=(hemnt-hsmnt-60)+ms+me;
                }
                else
                {
                    coun+=(hemnt-hsmnt)+ms+me;
                }
            }
            if (coun>=y*60)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
