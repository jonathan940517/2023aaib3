/// string 與 char 的差別
#include<stdio.h>///c 的輸入輸出
#include<iostream>///c++ 的輸入輸出
#include<string>
using namespace std;
int main(){
    printf("%d\n",'a');///''代表一個字母,會對應一個數
    printf("%d\n","a");///""代表多字母(字串),就是陣列,就是指標

    if('a'==97)printf("其實'a'是數值97\n");
}
