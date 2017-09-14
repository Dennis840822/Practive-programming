#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	struct data{
		char name[10];
		int math;
	}s1 = {"Lily Chen",83};
	
	struct data s2;
	s2 = s1;
	
	printf("s1.name=%s,s1.math=%d\n",s1.name,s1.math);
	printf("s2.name=%s,s2.math=%d\n",s2.name,s2.math);
	return 0;
}
