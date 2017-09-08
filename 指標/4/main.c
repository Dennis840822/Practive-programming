#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int *ptri;
	char *ptrc;
	
	printf("sizeof(ptri)=%d\n",sizeof(ptri));
	printf("sizeof(ptrc)=%d\n",sizeof(ptrc));
	printf("sizeof(*ptri)=%d\n",sizeof(*ptri));
	printf("sizeof(*ptrc)=%d\n",sizeof(*ptrc));
	//如果sizeof顯示為8位元，代表電腦用64位元編譯程式 
	//如果sizeof顯示為4位元，代表電腦用32位元編譯程式
	system("PAUSE");
	return 0;
}
