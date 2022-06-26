    #include <bits/stdc++.h>
    using namespace std ;
    int main (){
    int x ,y ;
    cin>>x>>y;
    int ls=max(x,y);
if (ls == 6)
		cout << "1/6";
	else if (ls == 5)
		cout << "1/3";
	else if (ls == 4)
		cout << "1/2";
	else if (ls == 3)
		cout << "2/3";
	else if (ls == 2)
		cout << "5/6";
	else if (ls == 0)
		cout << "0/1";
	else
		cout << "1/1";
}
    }
