#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void one(void);
int a;

int main(int argc, char *argv[]) 
{
	int a = 100;
	printf("%d\n",a);
	one();
	printf("%d\n",a);
	return 0;
}
void one(){
	a = a + 300;
	printf("%d\n",a);
}
