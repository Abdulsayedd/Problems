    #include<bits/stdc++.h>
    using namespace std;

    int main()
    {
        int n,coun=1;

        cin>>n;

        while(n!=0)
        {

            if(n%2!=0)

            {

                coun++;

            }

            n=n/2;

        }
        cout<<coun-1<<endl;

        return 0;
    }
