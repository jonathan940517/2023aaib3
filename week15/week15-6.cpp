#include <iostream>
using namespace std;
int MYPOWER(int a,int b){
	if(b==0)return 1;
	return a*MYPOWER(a,b-1);
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}