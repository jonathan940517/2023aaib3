///week03-1.cpp 考試題目:除惡務盡,但是無法執行
///因為range-based for 迴圈 必須在c++11 (2021之後)才能使用
///如果使用 c++98 (1998年版c++)會無法正確編譯,執行會出錯,迴圈出不來
///codeblocks 17.12裡 setting-compiler 勾第2個 -std=c++11
#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	cin>>s;
	for(char i:s){
		if(i!='2')cout<<i;
	}
	cout<<endl;
}
