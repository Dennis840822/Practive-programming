#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a[3] = {5,7,9};
	printf("a[0]=%d, *(a+0)=%d\n",a[0],*(a+0));//在程式裡a+i則代表a[i]的位址 
	printf("a[1]=%d, *(a+1)=%d\n",a[1],*(a+1));
	printf("a[2]=%d, *(a+2)=%d\n",a[2],*(a+2));
	return 0;
}
