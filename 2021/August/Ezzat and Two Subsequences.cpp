        #include <bits/stdc++.h>
        using namespace std ;
        int main ()
        {
            int t;
            cin>>t;
            while(t--)
            {

                vector<double>a,b;
                vector<double>x;
                long long n;
                double avg=0,s1=0,s2=0,s3=0;
                double avg1 = 0,avg2 = 0;
                cin>>n;
                vector<long long>arr(n);
                for ( int i = 0 ; i < n ; i++)
                {
                    cin>>arr[i];
                }
                sort(arr.rbegin(),arr.rend());
                long double maxx1=arr[0];
                long double maxx2=(accumulate( arr.begin()+1, arr.end(), 0.0))/(n-1);
                cout<<fixed<<setprecision(8)<<maxx1+maxx2<<endl;
            }
        }
