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
			for(int i=0;s[i]!=0;i++){
				if(c==s[i]){
					printf("%c",s[i-2]);
					break;
				}
			}
		}
	}
}