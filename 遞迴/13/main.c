#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define PI 3.14
double area(double);
int main(int argc, char *argv[]) 
{
	printf("PI=%4.2f, area()=%6.2f\n",PI,area(2.0));
	
	system("PAUSE");
	return 0;
}
double area(double r){
	return PI*r*r;
}
