#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	vector<int>num;
	while(cin>>n){
		num.push_back(n);
		sort(num.begin(),num.end());
		cout<<(num[num.size()/2]+num[(num.size()-1)/2])/2<<endl;
	}
}