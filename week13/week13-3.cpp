//week13-3.cpp
using namespace std;
int main() {
    vector<int>v1,v2;
    int ans=0,a,b;
    while(cin>>a>>b){
        v1.push_back(a);
        v2.push_back(b);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    for(int i=0;i<v1.size();i++){
        ans += abs(v1[i]-v2[i]);
    }
    cout<<ans;
}