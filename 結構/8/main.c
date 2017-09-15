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
	
	printf("學生姓名：");
	gets(ptr->name);
	printf("數學成績：");
	scanf("%d",&ptr->math);
	printf("英文成績：");
	scanf("%d",&ptr->eng);
	printf("數學成績=%d, ",ptr->math);
	printf("英文成績=%d, ",ptr->eng);
	printf("平均分數=%.2f\n",(ptr->math+ptr->eng)/2.0);
	
	system("PAUSE");
	return 0;
}
