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
	//�p�Gsizeof��ܬ�8�줸�A�N��q����64�줸�sĶ�{�� 
	//�p�Gsizeof��ܬ�4�줸�A�N��q����32�줸�sĶ�{��
	system("PAUSE");
	return 0;
}
