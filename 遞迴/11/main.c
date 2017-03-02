#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define BEGIN {
#define END } 
int main(int argc, char *argv[]) 
BEGIN
	int i,j;
	for(i=1;i<=5;i++)
	BEGIN
		for(j=1;j<=i;j++)
			printf("*");
		printf("\n");
	END
	return 0;
END
