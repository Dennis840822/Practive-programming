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
	printf("於位址%p內，儲存的變數內容為%d\n",p1,*p1);
}
