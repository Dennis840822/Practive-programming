#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*int add(int,int);
int main(int argc, char *argv[]) 
{
	int sum,a=5,b=3;
	sum = add(a,b);
	printf("%d+%d=%d\n",a,b,sum);
	
	system("PAUSE");
	return 0;
}
int add(int a,int b){
	int c;
	c= a+b;
	return c;
}*/

//�����ҩ���9��add(a,b)�����Ʀr�u�O�t�d�ǻ����Ƶ{�����޼ƦӤw 
//�ӰƵ{�������޼ƦW�٥u�O�ӥN��(��)�A�õL�v�T�Ʀr�ǻ����L�{�P���G 

int add(int,int);
int main(int argc, char *argv[]) 
{
	int sum,a=5,b=3;
	sum = add(a,b);
	printf("%d+%d=%d\n",a,b,sum);
	
	system("PAUSE");
	return 0;
}
int add(int a,int b){
	int sum;
	sum = a+b;
	return sum;
}
