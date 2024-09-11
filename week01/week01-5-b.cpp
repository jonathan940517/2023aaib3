#include <iostream>
using namespace std;
int main(){
	int n,t=0;
	cin>>n;
	int a[32];
	while(n>0){
		a[t++]=n%2;
		n/=2;
	}
	for(int i=t-1;i>=0;i--){
		cout<<a[i];
	}
	return 0;
}