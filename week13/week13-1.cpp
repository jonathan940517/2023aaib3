#include <iostream>
using namespace std;
int helper(int a,int b){
	return 3;
}
int main(){
	int a,b;
	while(cin>>a>>b&&(a+b)){
		int ans = helper(a,b);
		if(ans==0)printf("No carry operation.\n");
		else if(ans==1)printf("1 carry operation.\n");
		else printf("%d carry operations.\n");
	}
}