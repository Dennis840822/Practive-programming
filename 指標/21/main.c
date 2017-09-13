#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int num[3][4];
	
	printf("num=%p\n",num);
	printf("&num=%p\n",&num);
	printf("*num=%p\n",*num);
	
	printf("num[0]=%p\n",num[0]);
	printf("num[1]=%p\n",num[1]);
	printf("num[2]=%p\n",num[2]);
	
	printf("&num[0]=%p\n",&num[0]);
	printf("&num[1]=%p\n",&num[1]);
	printf("&num[2]=%p\n",&num[2]);
	
	system("PAUSE");
	return 0;
}
