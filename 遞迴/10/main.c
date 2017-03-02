#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void one(int,int);
int main(int argc, char *argv[]) 
{
	int a = 3,b = 5;
	printf("a = %d , b = %d\n",a,b);
	one(a,b);
	printf("a = %d , b = %d\n",a,b);
	return 0;
}
void one(int a,int b){
	a = a + 10;
	b = b + 10;
}
