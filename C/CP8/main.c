#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a,b;
	srand((unsigned)time(NULL));
	a = rand()%100;
	scanf("%d",&b);
	if(b>a){
		printf("超過了");
	}else if(b<a){
		printf("太小了");
	}else{
		printf("恭喜答對");
	}
	system("PAUSE");
	return 0;
}
