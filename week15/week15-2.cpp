#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    int cs=0;
    while(cin>>s&&s!="#"){
        printf("Case %d: ",++cs);
        if(s=="HELLO")printf("ENGLISH");
        else if(s=="HOLA")printf("SPANISH");
        else if(s=="HALLO")printf("GERMAN");
        else if(s=="BONJOUR")printf("FRENCH");
        else if(s=="CIAO")printf("ITALIAN");
        else if(s=="ZDRAVSTVUJTE")printf("RUSSIAN");
        else printf("UNKNOWN");
        printf("\n");
    }
}