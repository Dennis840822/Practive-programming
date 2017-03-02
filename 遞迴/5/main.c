#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	printf("fac(4)=%d\n",fac(4));
	
	system("PAUSE"); 
	return 0;
}
int fac(int n){
	if(n>0){
		return (n*fac(n-1));
	}
	else{
		return 1;
	}
}
