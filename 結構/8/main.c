#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	struct data{
		char name[10];
		int math;
		int eng;
	}student,*ptr;
	
	ptr = &student;
	
	printf("�ǥͩm�W�G");
	gets(ptr->name);
	printf("�ƾǦ��Z�G");
	scanf("%d",&ptr->math);
	printf("�^�妨�Z�G");
	scanf("%d",&ptr->eng);
	printf("�ƾǦ��Z=%d, ",ptr->math);
	printf("�^�妨�Z=%d, ",ptr->eng);
	printf("��������=%.2f\n",(ptr->math+ptr->eng)/2.0);
	
	system("PAUSE");
	return 0;
}
