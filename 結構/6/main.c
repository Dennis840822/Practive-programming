#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	struct data{
		char name[10];
		int math;
	}student[10];//���c�}�C�W��
	//student;=>���c�ܼ� 
	
	printf("sizeof(student[3])=%d\n",sizeof(student[3]));
	printf("sizeof(student)=%d\n",sizeof(student));
	
	system("PAUSE");
	return 0;
}
