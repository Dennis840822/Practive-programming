#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void rect(int ,int ,int *,int *);
int main(int argc, char *argv[]) 
{
	int a=5,b=8;
	int area,peri;
	
	rect(a,b,&area,&peri);
	printf("area=%d , total length=%d\n",area,peri);
	
	system("PAUSE");
	return 0;
}
void rect(int x,int y,int *p1,int *p2){
	*p1 = x*y;
	*p2 = 2*(x+y);
}
