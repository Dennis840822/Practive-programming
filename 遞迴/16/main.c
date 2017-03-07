#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define SQUARE n*n 
int main(int argc, char *argv[]) 
{
	int n;
	printf("Input an integer:");
	scanf("%d",&n);
	printf("%d*%d=%d\n",n,n,SQUARE);
	
	system("PAUSE");
	return 0;
}
