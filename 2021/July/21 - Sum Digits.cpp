    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
    ios_base::sync_with_stdio(false) , cin.tie(0);
    string S;
    unsigned int N,sum=0;
    cin>>N;
    unsigned int arr[N];
    string arr2[N];
    cin>>S;
    for (int l=0 ; l<N ; l++)
    {
       arr2[l]=S[l];
    }
    for (int j=0;j<N;j++)
    {
    arr[j]=stoi(arr2[j]);
    }

    for (int i=0;i<N;i++)
    {
        sum+=arr[i];
    }
        cout<<sum;

    }
