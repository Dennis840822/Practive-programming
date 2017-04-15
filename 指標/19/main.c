#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void replace(int *, int, int);
int main(int argc, char *argv[]) 
{
	int a[5] = {13,32,67,14,95};
	int i,num=24;
	
	replace(a,4,num);
	printf("置換後，陣列的內容為");
	for(i=0;i<5;i++)
		printf("%3d",a[i]);
	printf("\n");
	
	system("PAUSE");
	return 0;
}
void replace(int *ptr, int n, int num){
	*(ptr+n-1) = num;
}
