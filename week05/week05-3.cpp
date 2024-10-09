#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main(){
	char c;
	string s = "`1234567890-=qwertyuiop[]\\asdfghjkl;\'zxcvbnm,./";
	while(scanf("%c",&c)!=EOF){
		if(c==' '||c=='\n')cout<<c;
		else{
			c=tolower(c);
			cout<<s[s.find(c)-2];
		}
	} 
}