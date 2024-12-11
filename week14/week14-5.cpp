#include <iostream>
using namespace std;
int main(){
	int a,b;
	while(cin>>a>>b){
		int bad=0,tmp=a;
		if(b==1||a==1){
			cout<<"Boring!\n";
			continue;
		}
		while(a>1){
			if(a%b)bad=1;
			a /= b;
		}
		if(bad)cout<<"Boring!\n";
		else{
			while(tmp){
				cout<<tmp;
				if(tmp!=1)cout<<" ";
				tmp/=b;
			}
			cout<<endl;
		}
	}
}