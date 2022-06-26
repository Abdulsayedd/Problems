    #include <bits/stdc++.h>
    #define ll long long
   // #define endl "\n"
    #define testcase int t ; cin>>t ; while(t--)
    #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;
    int main () {
        pre;
        testcase {
            int n;
            cin >> n;
            string x;
            cin >> x;
            int m;
            cin >> m;
            map<char,int>arr;
            int ch=0,c=0;
            for (int i = 0; i < m; i++) {
                char m1;cin>>m1;
                arr[m1]=1;
                for (int j = 0; j < x.size(); j++) {
                    if (x[j] == m1)ch++;
                }
            }
            //for(auto i : mp)cout<<i.first<<" "<<i.second<<endl;
            set<int>v;
            int l=0;
            while(ch)
            {
                for(int i = 0 ; i < x.size() ; i++)
                {
                    if(arr[x[i]]==1)
                    {
                        if(i==0)
                        {
                            if(ch==1)ch--;
                            continue;
                        }
                        else
                        {
                            for(int j = i-1 ; j >=0;j--)
                        {
                            if(arr[x[j]]==1 && !(v.find(j) != v.end()))
                            {ch--;v.insert(j);}
                            else {v.insert(j);break;}
                        }
                        }
                    }
                }
                int cc=0;
                for(auto i : v)
                {
                    x.erase(i-cc,1);
                    cc++;
                }
                v.clear();
                c++;
            }
            if(c-1<0)cout<<0<<endl;
            else cout<<c-1<<endl;
        }
    }