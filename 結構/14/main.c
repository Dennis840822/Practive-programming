#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char key;
	enum color{
		red = 114,
		green = 103,
		blue = 98
	}shirt;
	
	do{
		printf("�п�Jr,g��b�G");
		scanf("%c",&key);
		fflush(stdin);
	}while((key!=red) && (key!=green) && (key!=blue));//�o�ӥΩ�P�O��J�P�C�|���Acolor�̪��ȽT�w�O�_�۲ŦX 
	
	shirt = key;
	
	switch(shirt){
		case red:
			printf("�z��ܤF����\n");
			break;
		case green:
			printf("�z��ܤF���\n");
			break;
		case blue:
			printf("�z��ܤF�Ŧ�\n");
			break;
	}
	
	system("PAUSE");
	return 0;
}
