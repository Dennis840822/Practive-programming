#include <stdio.h>
#include <stdlib.h>
#define MAX 2 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i;
	struct data{
		char name[10];
		int math;
	}student[MAX];
	//struct  data student[MAX];
	
	for(i=0;i<MAX;i++){
		printf("�ǥͩm�W�G");
		gets(student[i].name); 
		printf("�ƾǡG");
		scanf("%d",&student[i].math);
		fflush(stdin);//�M�Žw�İϤ������ 
	}
	for(i=0;i<MAX;i++)
		printf("%s���ƾǦ��Z=%d\n",student[i].name,student[i].math);
		
	system("PAUSE");
	return 0;
}
