#include <iostream>
using namespace std;
int a[10000];
int main(){
	int T,N;
	cin>>T;
	for(int t=1;t<=T;t++){
		char c;
		cin>>c>>c>>N;
		for(int i=0;i<N*N;i++)cin>>a[i];
		int bad=0;
		for(int i=0;i<N*N;i++){
			if(a[i]<0||a[i]!=a[N*N-i-1])bad=1;
		}
		if(bad==0)cout<<"Test #"<<t<<": Symmetric.\n";
		else cout<<"Test #"<<t<<": Non-symmetric.\n";
	}
}