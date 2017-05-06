#include <stdio.h>
#include <stdlib.h>

/* run this program u
sing the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	
	struct data{
		char name[10];
		int math;
	}student;//為第1種方式
	
	//struct data student;//為第2種方式
	
	//已試過，必須先定義出結構名稱和成員再宣告結構變數，才能使用此結構為第２種方式 
	//也可在定義出結構後後面接上結構變數即可為第１種方式 
	printf("請輸入學生姓名：");
	gets(student.name);
	printf("請輸入成績：");
	scanf("%d",&student.math);
	
	printf("姓名：%s\n",student.name);
	printf("姓名：%d\n",student.math);
	
	system("PAUSE");
	return 0;
}
