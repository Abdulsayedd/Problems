    #include <bits/stdc++.h>
    using namespace std ;
    int main (){
        int n ,coun=0 ;
        cin>>n;
        string x ;
        cin>>x;
        for(int i=0 ; i<x.size();i++)
        {
            x[i]=tolower(x[i]);
        }
        sort(x.begin(),x.end());
       for(int i=0 ; i<x.size();i++)
        {
           if(x[i]==x[i+1])
           {
               continue;
           }
           else
           {
               coun++;
           }
        }
        if(coun==26)
        {
            cout<<"YES";
        }
        else
            cout<<"NO";
    }
