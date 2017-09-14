#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	struct data{
		char name[10];
		int math;
	}student;
	
	printf("請輸入姓名：");
	gets(student.name);
	printf("請輸入成績：");
	scanf("%d",&student.math);
	
	printf("姓名：%s\n",student.name);
	printf("成績：%d\n",student.math);
	
	system("PAUSE");
	return 0;
}
