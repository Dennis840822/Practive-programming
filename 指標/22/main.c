#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//第20個程式碼作變更 
int main(int argc, char *argv[]) 
{
	char name[20];//name是指標常數，值無法更改 
	char *ptr = "How are you";
	printf("what`s your name?");
	gets(++name);//拿到鍵盤輸入的值並存放在字元name裡面
	//name是指標常數無法做數值更改 
	printf("Hi, %s, ",name);
	puts(++ptr);//直接印出指標變數ptr的值
	//ptr是指標變數能做數值更改 
	
	system("PAUSE");
	return 0;
}
