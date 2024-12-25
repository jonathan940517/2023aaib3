#include <iostream>
using namespace std;
int main(){
	int num[10] = {};
	int n;
	while(cin>>n&&n)num[n]++;
	cin>>n;
	cout<<num[n]<<endl;
}