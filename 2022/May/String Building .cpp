    #include <bits/stdc++.h>
    #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;
    int main () {
        pre;
        int t;cin>>t;
        while (t--) {
            string x;cin>>x;
            int c=0;
            bool f=true;
            for(int i = 0 ; i < x.size() ; i++)
            {
                if(x[i]==x[i+1])c++;
                else {
                    if(!c){f=false;break;}
                    else c=0;
                }
            }
            if(x.size()==1)f=false;
            f?cout<<"YES"<<endl:cout<<"NO"<<endl;
        }
    }