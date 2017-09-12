#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int *maximum(int *);
int main(int argc, char *argv[]) 
{
	int a[SIZE] = {3,1,7,2,6};
	int i,*ptr;
	printf("array a=");
	for(i=0;i<SIZE;i++)
		printf("%d ",a[i]);
	ptr = maximum(a);
	printf("\nmaximum=%d\n",*ptr);
	
	system("PAUSE");
	return 0;
}
int *maximum(int *arr){
	int i,*max;
	max = arr;
	for(i=0;i<SIZE;i++)
		if(*max < *(arr+i))
			max = arr + i;//取得最大數值的位置並傳回去給ptr 
	return max;
}
