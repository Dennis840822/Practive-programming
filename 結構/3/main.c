#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	struct data{
		char name[10];
		int math;
	};
	struct data student = {"Mary Wang",74};//��1�ؤ�k����l�� 
	
	/*struct data{
		char name[10];
		int math;
	}student = {"Marry Wang",74};*///��2�ؤ�k����l�� 
	
	
	printf("�ǥͪ��m�W�G%s\n",student.name);
	printf("�ǥͪ����Z�G%d\n",student.math);
	
	system("PAUSE");
	return 0;
}
