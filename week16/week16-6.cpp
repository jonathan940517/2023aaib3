#include <bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin>>N;
	while(N--){
		int ans=0,n;
		cin>>n;
		vector<int>num(n);
		for(auto&i:num){
			cin>>i;
			for(auto&j:num)if(i<j)ans++;
		}
		printf("Optimal train swapping takes %d swaps.\n",ans);
	}
}