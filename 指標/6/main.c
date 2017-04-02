#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a=5,b=10;
	int *ptr1,*ptr2;
	ptr1=&a;
	ptr2=&b;
	*ptr1=7;
	*ptr2=32;
	a=17;
	ptr1=ptr2;
	*ptr1=9;
	ptr1=&a;
	a=64;
	*ptr2=*ptr1+5;
	ptr1=&a;
	
	printf("a=%2d, b=%2d, *ptr1=%2d, *ptr2=%2d\n",a,b,*ptr1,*ptr2);
	printf("ptr1=%p, ptr2=%p\n",ptr1,ptr2);
	
	system("PAUSE");
	return 0;
}
