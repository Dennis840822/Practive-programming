#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int *ptr,num=20;
	
	ptr=&num;
	printf("num=%d, &num=%p\n",num,&num);
	printf("*ptr=%d, ptr=%p, &ptr=%p\n",*ptr,ptr,&ptr);
	system("PAUSE");
	return 0;
}
