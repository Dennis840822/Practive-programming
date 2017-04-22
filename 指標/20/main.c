#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define SIZE 5
int *maximum(int *); 
int main(int argc, char *argv[]) 
{
	int a[SIZE] = {3,1,7,2,6};
	int i,*ptr;
	printf("array a=");
	for(i=0;i<SIZE;i++)
		printf("%d",a[i]);
	ptr = maximum(a);//a=>指標常數，代表了ａ陣列的第一元素記憶體位址 
	printf("\nmaximum=%d\n",*ptr);
	
	system("PAUSE");
	return 0;
}
int *maximum(int *arr){
	int i,*max;
	max = arr;
	for(i=1;i<SIZE;i++){
		if(*max < *(arr+i)){
			max = arr +i;
			//printf("\nmax=%d , arr=%d\n",*max,*arr);
		}
	}
	return max;
}
