#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a[3] = {5,7,9};
	int i,sum = 0;
	int *ptr = a;
	for(i=0;i<3;i++)
		sum += *(ptr++);//ptr++是指ptr+1即為指標ptr指向陣列的下一個元素 
	printf("sum=%d\n",sum);
	//指標變數=>是存放著指向變數的位址，亦可直接做加減法
	//指標常數=>是指陣列的第一個元素的記憶體位址，亦不可直接做加減法 
	
	system("PAUSE");
	return 0;
}
