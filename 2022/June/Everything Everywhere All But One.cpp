        #include <bits/stdc++.h>
        #define testcase int t;cin>>t;while(t--)
        #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
        using namespace std ;
        int main ()
        {
            pre;
            testcase
            {
                int n;cin>>n;
                int arr[n];
                double c=0;
                bool f = false;
                int sz=n-1;
                for(int &i : arr){cin>>i;c+=i;}
                double c1;
                for(int & i : arr)
                {
                    c1=c;
                    c1-=i;
                    if(c1/sz==i){f=true;break;}
                }
                f?cout<<"YES"<<endl:cout<<"NO"<<endl;
            };
        }