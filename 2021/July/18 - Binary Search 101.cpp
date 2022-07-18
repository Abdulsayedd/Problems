    #include <bits/stdc++.h>
    #define hanaka ios_base::sync_with_stdio(false) , cin.tie(0);
    using namespace std ;

    int main (){
    hanaka

        unsigned long long a, b , k, sus,sus2,coun=0;
        cin>>a >> b >> k;
        sus2=(a+b)/2;
         do
        {
            sus = (a+b)/2;
            if(sus<k)
            {
                a=sus+1;
                coun++;
            }
            else if(sus>k)
            {
                b=sus-1;
                coun++;
            }

        }   while(sus!=k);
        coun++;
        cout<<coun;
    }
