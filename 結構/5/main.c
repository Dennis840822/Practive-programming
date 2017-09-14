#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	struct date{
		int month;
		int day;
	};
	struct gift{
		int mount;
	};
	struct data{
		char name[10];
		int math;
		struct date birthday;
		struct gift Allgift;
	}s1 = {"Mary Wang",74,{10,2},{100}};
	
	printf("學生姓名：%s\n",s1.name);
	printf("生日：%d月%d日\n",s1.birthday.month,s1.birthday.day);
	printf("數學成績：%d\n",s1.math);
	printf("多少禮物：%d\n",s1.Allgift.mount);//100是儲存在mount裡，所以要用.(dot)一層層的解開並印出 
	
	system("PAUSE");
	return 0;
}
