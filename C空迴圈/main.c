#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i=100;
	while(i>10){
		scanf("%d",&i);
		while(getchar() != '\n');//�Űj�餣�|������v�T 
		printf("%d\n",i);
	}
	
	return 0;
}
