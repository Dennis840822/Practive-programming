#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a[3] = {5,7,9};
	int i,sum = 0;
	int *ptr = a;
	for(i=0;i<3;i++)
		sum += *(ptr++);//ptr++�O��ptr+1�Y������ptr���V�}�C���U�@�Ӥ��� 
	printf("sum=%d\n",sum);
	//�����ܼ�=>�O�s��۫��V�ܼƪ���}�A��i�������[��k
	//���б`��=>�O���}�C���Ĥ@�Ӥ������O�����}�A�礣�i�������[��k 
	
	system("PAUSE");
	return 0;
}
