#include <stdio.h>
#include <stdlib.h>
#include "C:\area.h" 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float base,height;
	
	printf("請輸入三角形面積的底:");
	scanf("%f",&base);
	printf("請輸入三角形面積的高:");
	scanf("%f",&height);
	printf("三角形的面積為:%.2f\n",TRIANGLE(base,height));
	
	system("PAUSE");
	return 0;
}
