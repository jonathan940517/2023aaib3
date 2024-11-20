#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    unordered_map<int,int> table;
    table[987654321]=9;
    table[123456789]=1;
    cout<<table[987654321]<<endl;
    cout<<table[123456789]<<endl;
}
