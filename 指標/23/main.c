#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i;
	char *ptr[3] = {"Tom","Lily","James Lee"};
	//�Ϋ��а}�C���|�y���Ŷ��ϥή��O
	//�ӨϥΤ@��(�@���ΤG��)�����y���Ŷ����O 
	for(i=0;i<3;i++){
		puts(ptr[i]);
	}
	
	system("PAUSE");
	return 0;
}
