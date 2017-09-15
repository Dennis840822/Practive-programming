#include <stdio.h>
#include <stdlib.h>
#define MAX 3
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i,m,index = 0;
	struct data{
		char name[10];
		int math;
	}student[MAX] = {{"Marry",87},{"Flora",93},{"Jenny",74}};
	
	m = student->math;//(student+0)->math = student[0].math
	//m = student[MAX].math;
	for(i=0;i<MAX;i++){
		if((student+i)->math > m){
			m = (student+i)->math;
			index = i;
		}
	}
	printf("%s的成績最高, ",(student+index)->name);
	printf("分數為%d\n",(student+index)->math);
	
	system("PAUSE");
	return 0;
}
