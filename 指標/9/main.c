#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void swap(int *,int *);
int main(int argc, char *argv[]) 
{
	int a=5,b=20;
	printf("交換前...");
	printf("a=%d,b=%d\n",a,b);
	swap(&a,&b);
	printf("交換後...");
	printf("a=%d,b=%d\n",a,b);
	
	system("PAUSE");
	return 0;
}
void swap(int *p1,int *p2){
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
