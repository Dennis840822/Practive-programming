#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int num[3][4] = {{12,23,42,18},{43,22,16,14},{31,13,19,28}};
	
	int m,n;
	for(m=0;m<3;m++)
		for(n=0;n<4;n++)
			printf("num[%d][%d]=%d, ¦ì§}=%p\n",m,n,*(*(num+m)+n),*(num+m)+n);
			
	printf("**num=%d\n",**num);
	
	system("PAUSE");
	return 0;
}
