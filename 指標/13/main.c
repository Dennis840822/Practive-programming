#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i,a[5]={32,16,35,65,52};
	printf("a=%d\n",a);
	printf("a=%p\n",a);
	printf("&a=%p\n",&a);
	
	for(i=0;i<5;i++)
		printf("&a[%d]=%p\n",i,&a[i]);
		
	system("PAUSE");
	return 0;
}
