#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	//strcmp是用來比較所有字串在字典中的順序，以字串首位字元做比較 
	gets(a);
	gets(b);
	if(strcmp(a,b) <= 0){
		puts(a);
		puts(b);
	}
	else{
		puts(b);
		puts(a);
	}
	system("PAUSE");
	return 0;
}
/*if(strcmp(a,b) < 0){  a在b前面，回傳(返回值)為小於0 
		puts(a);
		puts(b);
}
else if(strcmp(a,b) > 0){  a在b後面，回傳(返回值)為大於0 
		puts(b);
		puts(a);
}
else if(strcmp(a,b) == 0){  a和b為同一字串，回傳(返回值)為0 
		puts(a);
		puts("一樣的");
}
