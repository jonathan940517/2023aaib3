#include <iostream>
using namespace std;
int main(){
	double a,b;
	cin>>a>>b;
	a*=a;
	cout<<b/a<<endl;
	if(b/a<18.5)cout<<"too thin";
	else if(b/a<=24)cout<<"standard";
	else cout<<"too fat";
	
}