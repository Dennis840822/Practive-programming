#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a[10],i,t;
	for(i=1;i<=9;i++){
		a[i]=0;
	}
	for(i=1;i<=5;i++){
		scanf("%d",&t);
		a[t]=1;
	}
	for(i=0;i<=5;i++)
		if(a[i]==0)
			printf("%d",i);
	system("PAUSE");
	return 0;
}
