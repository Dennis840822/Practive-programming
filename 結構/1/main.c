#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	struct data{
		char name[10];
		int math;
	}student;
	
	printf("�п�J�ǥͩm�W�G");
	gets(student.name);
	printf("�п�J���Z�G");
	scanf("%d",&student.math);
	
	printf("�m�W�G%s\n",student.name);
	printf("�m�W�G%d\n",student.math);
	
	system("PAUSE");
	return 0;
}
