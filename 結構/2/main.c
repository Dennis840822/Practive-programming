#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	struct data{
		char name[10];
		int math;
	}student;
	printf("sizeof(student)=%d\n",sizeof(student));
	
	system("PAUSE");
	return 0;
}
