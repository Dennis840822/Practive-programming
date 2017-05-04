#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int n=20,*p,**pp;
	p = &n;
	pp = &p;
	printf("n=%d, &n=%p, *p=%d, p=%p, &p=%p\n",n,&n,*p,p,&p);
	printf("**pp=%d, *pp=%p, pp=%p, &pp=%p\n",**pp,*pp,pp,&pp);
	
	system("PAUSE");
	return 0;
}
