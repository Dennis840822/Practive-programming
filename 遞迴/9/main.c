#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void one(void);
int a = 1000;
int main(int argc, char *argv[]) 
{
	static int a = 100;
	a += 100;
	printf("%d\n",a);
	one();
	one();
	one();
	
	return 0;
}
void one(void){
	static int a = 100;
	printf("%d\n",a);
	a += 200;
}
