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
		printf("�W�L�F");
	}else if(b<a){
		printf("�Ӥp�F");
	}else{
		printf("���ߵ���");
	}
	system("PAUSE");
	return 0;
}
