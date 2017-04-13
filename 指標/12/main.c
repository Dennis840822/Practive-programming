#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int *max(int *,int *);
int main(int argc, char *argv[]) 
{
	int a=12,b=17,*ptr;
	ptr = max(&a,&b);
	printf("max=%d\n",*ptr);
	
	system("PAUSE");
	return 0;
}
int *max(int *p1,int *p2){
	if(*p1>*p2)
		return p1;
	else
		return p2;
}
