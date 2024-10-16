#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    vector<int>a;
    while(cin>>n){
        a.push_back(n);
        sort(a.begin(),a.end());
        int N = a.size();
        if(N%2==1)cout<<a[N/2]<<endl;
        else cout<<(a[N/2-1] + a[N/2])/2<<endl;
    }
}
