#include <stdio.h>
#include <stdlib.h>

/* run this program u
sing the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	
	struct data{
		char name[10];
		int math;
	}student;//����1�ؤ覡
	
	//struct data student;//����2�ؤ覡
	
	//�w�չL�A�������w�q�X���c�W�٩M�����A�ŧi���c�ܼơA�~��ϥΦ����c���Ģ��ؤ覡 
	//�]�i�b�w�q�X���c��᭱���W���c�ܼƧY�i���Ģ��ؤ覡 
	printf("�п�J�ǥͩm�W�G");
	gets(student.name);
	printf("�п�J���Z�G");
	scanf("%d",&student.math);
	
	printf("�m�W�G%s\n",student.name);
	printf("�m�W�G%d\n",student.math);
	
	system("PAUSE");
	return 0;
}
