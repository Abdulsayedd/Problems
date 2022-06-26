    #include <bits/stdc++.h>
    #define testcase int t;cin>>t;while(t--)
    #define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    using namespace std ;
int main ()
{
        testcase
    {

            string x;cin>>x;
            int turn = 0,z=0,o=0;//0 alice 1 bob
            bool f = false;
            vector<int>v;
            for(char & i : x)
            {
                if(i=='0')z++;
                else o++;
                v.push_back(i-'0');
            }
            while(!v.empty())
            {
                for(int i = 0 ; i < v.size()-1 ;i++)
                {
                    if(v[i]!=v[i+1])
                    {
                        v.erase(v.begin()+i+1);
                        v.erase(v.begin()+i);
                        z--;o--;
                        if(!turn)turn=1;
                        else turn=0;
                        if(v.empty())break;
                    }
                }
                if(z==v.size()||o==v.size())break;
            }
            if(!turn)cout<<"NET"<<"\n";
            else cout<<"DA"<<"\n";
    }
}