#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define SQUARE(X) X*X 
int main(int argc, char *argv[]) 
{
	int n;
	printf("Input an Integer:");
	scanf("%d",&n);
	
	printf("%d*%d=%d\n",n,n,SQUARE(n));
	
	system("PAUSE");
	return 0;
}
