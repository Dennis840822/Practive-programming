#include <stdio.h>
#include <stdlib.h>
#include "C:\area.h" 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float base,height;
	
	printf("�п�J�T���έ��n����:");
	scanf("%f",&base);
	printf("�п�J�T���έ��n����:");
	scanf("%f",&height);
	printf("�T���Ϊ����n��:%.2f\n",TRIANGLE(base,height));
	
	system("PAUSE");
	return 0;
}
