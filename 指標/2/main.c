#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int *ptr,num=20;
	
	ptr = &num;
	printf("num=%d, &num=%p\n",num,&num);
	printf("*ptr=%d, ptr=%p, &ptr=%p\n",*ptr,ptr,&ptr);
	/*
	printf：
	ptr(指標變數)=>印出指標所指向變數的位址，也就是存放所指向變數的位址
	*ptr=>印出指標所指向變數的內容值
	&ptr=>印出指標變數的位址 
	*/
	system("PAUSE");
	return 0;
}
