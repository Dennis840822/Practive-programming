#include <stdio.h>
#include <stdlib.h>
#define MAX 3
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct data{
	char name[10];
	int math;
};
	
int maximum(struct data arr[]);

int main(int argc, char *argv[]) 
{
	int idx;
	struct data s1[MAX] = {{"Marry",87},{"Flora",93},{"Jenny",74}};
	idx = maximum(s1);
	printf("%s的成績最高, ",(s1+idx)->name);
	printf("分數為%d分\n",(s1+idx)->math);
	
	system("PAUSE");
	return 0;
}
int maximum(struct data arr[]){
	int m,i,index;
	m = arr->math;
	for(i=0;i<MAX;i++)
		if((arr+i)->math > m){
			m = (arr+i)->math;
			index = i;
		}
	return index;
}
