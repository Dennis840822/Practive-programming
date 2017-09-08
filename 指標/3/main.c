#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a=5,b=3;
	int *ptr;
	
	ptr = &a;
	printf("&a=%p, &ptr=%p, ptr=%p, *ptr=%d\n",&a,&ptr,ptr,*ptr);
	ptr = &b;
	printf("&b=%p, &ptr=%p, ptr=%p, *ptr=%d\n",&b,&ptr,ptr,*ptr);
	
	system("PAUSE");
	return 0;
}
