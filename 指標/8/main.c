#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void address(int *);
int main(int argc, char *argv[]) 
{
	int a=12;
	int *ptr=&a;
	
	address(&a);
	address(ptr);
	
	system("PAUSE");
	return 0;
}
void address(int *p1){
	printf("���}%p���A�x�s���ܼƤ��e��%d\n",p1,*p1);
}
