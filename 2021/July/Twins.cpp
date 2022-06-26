#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	 int n;
	 cin>>n;
	 int x[n];
	 int sum=0;
	 int coun=0;
	 for(int i=0;i<n;i++){
		 cin>>x[i];
		 sum+=x[i];
	 }
	 sum=sum/2;
	 sort(x,x+n);
	 int sum2=0;
	 for(int i=n-1;i>=0;i--){
		 sum2+=x[i];
		 coun++;
		if(sum2>sum){
		 	break;
		}
	 }
	 cout<<coun;
}
