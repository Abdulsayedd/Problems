//https://codeforces.com/contest/625/problem/B
#include <bits/stdc++.h>
using namespace std;
#define pre ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
void lps_func(string txt, vector<int>&Lps){
    Lps[0] = 0;
    int len = 0;
    int i=1;
    while (i<txt.length()){
        if(txt[i]==txt[len]){
            len++;
            Lps[i] = len;
            i++;
            continue;
        }
        else{
            if(len==0){
                Lps[i] = 0;
                i++;
                continue;
            }
            else{
                len = Lps[len-1];
                continue;
            }
        }
    }
}
int KMP(string pattern,string text){
    int n = text.length();
    int c=0;
    int m = pattern.length();
    vector<int>Lps(m);
    lps_func(pattern,Lps);
    int i=0,j=0;
    while(i<n){
        if(pattern[j]==text[i]){i++;j++;}
        if (j == m) {
            c++;
            j=0;
        }
        else if (i < n && pattern[j] != text[i]) {
            if (j == 0)
                i++;
            else
                j = Lps[j - 1];
        }
    }
    return c;
}
int main () {
    pre;
    string x,y;
    cin>>x>>y;
    cout<<KMP(y,x);
}