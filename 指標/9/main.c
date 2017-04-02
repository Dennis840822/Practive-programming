#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void add10(int *);
int main(int argc, char *argv[]) 
{
	int a=5;
	printf("呼叫add10()之前,a=%d\n",a);
	add10(&a);
	printf("呼叫add10()之後,a=%d\n",a);
	
	system("PAUSE");
	return 0;
}
void add10(int *p1){
	*p1 = *p1+10;
}
