#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	enum color{
		red,
		green,
		blue,
	};
	enum color shirt;
	
	printf("sizeof(shirt)=%d\n",sizeof(shirt));
	printf("red=%d\n",red);
	printf("green=%d\n",green);
	printf("blue=%d\n",blue);
	
	shirt = green;
	if(shirt == green)
		printf("�z��ܤF��⪺��A\n");
	else
		printf("�z��ܤF�D��⪺��A\n");
	
	system("PAUSE"); 
	return 0;
}
