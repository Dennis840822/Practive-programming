#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a,b;
	a=1;
	while(a<=5)
	{
		printf("Now1 b is %d \n",b); 
		b=1;
		printf("Now2 b is %d \n",b); 
		while(b<=a)
		{
			printf("*");
			b=b+1;
		}
		printf("\n");
		printf("Now5 b is %d \n",b); 
		printf("\n");
		printf("Now6 b is %d \n",b); 
		a=a+1;
		printf("Now7 b is %d \n",b); 
	}
	system("PAUSE");
	return 0;
}
