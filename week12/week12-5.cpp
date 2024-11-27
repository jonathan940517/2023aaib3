#include <bits/stdc++.h>
using namespace std;
int a[100][100];
int main(){
	int T,N,now;
	char c,c2;
	cin>>T;
	for(int t=1;t<=T;t++){
		cin>>c>>c2>>N;
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++){
				cin>>a[i][j];
			}
		}
		int bad=0;
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++){
				if(a[i][j]!=a[N-1-i][N-1-j]||a[i][j]<0)bad=1;
			}
		}
		cout<<"Test #"<<t<<": ";
		if(bad==0)cout<<"Symmetric.";
		else cout<<"Non-symmetric.";
		cout<<endl;
	}
	
}