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
	
	printf("�ǥͩm�W�G%s\n",s1.name);
	printf("�ͤ�G%d��%d��\n",s1.birthday.month,s1.birthday.day);
	printf("�ƾǦ��Z�G%d\n",s1.math);
	printf("�h��§���G%d\n",s1.Allgift.mount);//100�O�x�s�bmount�̡A�ҥH�n��.(dot)�@�h�h���Ѷ}�æL�X 
	
	system("PAUSE");
	return 0;
}
