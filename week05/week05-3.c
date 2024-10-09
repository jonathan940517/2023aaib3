#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
	char c;
	char s[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;\'zxcvbnm,./";
	while(scanf("%c",&c)!=EOF){
		if(c==' '||c=='\n'){
			printf("%c",c);
		}else{
			c = tolower(c);
			c = *(strchr(s,c)-2);
			printf("%c",c);
		}
	}
}