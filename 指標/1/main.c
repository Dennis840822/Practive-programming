#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a,b=5;
	double c=3.14;
	
	printf("a=%4d, sizeof(a)=%d, 位址為：%d\n",a,sizeof(a),&a);
	printf("b=%4d, sizeof(b)=%d, 位址為：%d\n",b,sizeof(b),&b);
	printf("c=%4.2f, sizeof(c)=%d, 位址為：%d\n",c,sizeof(c),&c);
	system("PAUSE");
	return 0;
}
