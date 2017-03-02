#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int add(int num1,int num2){
	int a;
	a = num1+num2;
	return a;
}

int main(int argc, char *argv[]) 
{
	int sum,a=5,b=3;
	sum = add(a,b);
	printf("%d+%d=%d\n",a,b,sum);
	
	system("PAUSE");
	return 0;
}
