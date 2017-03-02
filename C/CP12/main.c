#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char a[10];
	//scanf("%s",a);//進行字串讀入，遇到空格就提前終止 
	gets(a);//進行讀入時卻是可以讀入一整行 
	//printf("%s\n",a); 
	puts(a);//輸出時，會在末尾自動換到下一行，相當於printf("%s\n",a) 
	int len;
	len = strlen(a);//獲取字串的長度，需搭配"#include <string.h>"函數 
	printf("%d\n",len);
	system("PAUSE");
	return 0;
}
