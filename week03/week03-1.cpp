///week03-1.cpp �Ҹ��D��:���c�Ⱥ�,���O�L�k����
///�]��range-based for �j�� �����bc++11 (2021����)�~��ϥ�
///�p�G�ϥ� c++98 (1998�~��c++)�|�L�k���T�sĶ,����|�X��,�j��X����
///codeblocks 17.12�� setting-compiler �Ĳ�2�� -std=c++11
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
