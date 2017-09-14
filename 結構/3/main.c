#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	struct data{
		char name[10];
		int math;
	};
	struct data student = {"Mary Wang",74};//第1種方法給初始值 
	
	/*struct data{
		char name[10];
		int math;
	}student = {"Marry Wang",74};*///第2種方法給初始值 
	
	
	printf("學生的姓名：%s\n",student.name);
	printf("學生的成績：%d\n",student.math);
	
	system("PAUSE");
	return 0;
}
