#include <iostream>
using namespace std;
int f(int n){
	int ans=0;
	while(n>0){
		ans+=n%10;
		n/=10;
	}
	return ans;
}
int main(){
	int n;
	while(cin>>n&&n){
		n = f(f(f(n)));
		cout<<n<<endl;
	}
}