#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void star(void);
int one(int);
int main(int argc, char *argv[]) 
{
	star();
	printf("welcome to C lanuages\n");
	star();
	int a = 0;
	a = one(a);
	printf("%d\n",a);
	system("PAUSE");
	return 0;
}
void star(void){
	printf("*************\n");
	return;
}
int one(int a){
	int b = 1;
	a = a + b;
	return a;
}
