#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char key;
	enum color{
		red = 114,
		green = 103,
		blue = 98
	}shirt;
	
	do{
		printf("請輸入r,g或b：");
		scanf("%c",&key);
		fflush(stdin);
	}while((key!=red) && (key!=green) && (key!=blue));//這個用於判別輸入與列舉型態color裡的值確定是否相符合 
	
	shirt = key;
	
	switch(shirt){
		case red:
			printf("您選擇了紅色\n");
			break;
		case green:
			printf("您選擇了綠色\n");
			break;
		case blue:
			printf("您選擇了藍色\n");
			break;
	}
	
	system("PAUSE");
	return 0;
}
