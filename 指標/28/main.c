#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int num[3][4] = {{12,23,42,18},{43,22,16,14},{31,13,19,28}};
	
	int m,n;
	
	for(m=0;m<3;m++){
		for(n=0;n<4;n++){
			if(*(*(num+m)+n) > 40)
				*(*(num+m)+n) = 40;
			printf("%3d",*(*(num+m)+n));
		}
		printf("\n");
	}
	
	system("PAUSE");
	return 0;
}

//雙重指標不能用在函數接收上
//指標能用在函數接收上 
