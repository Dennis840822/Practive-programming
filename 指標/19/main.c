#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i;
	char *ptr[3]={"Tom","Lily","James Lee"};
	for(i=0;i<3;i++)
		puts(ptr[i]);
		//printf("%s\n",ptr[i]);
	//ptr[1]=>Tom
	//ptr[2]=>Lily
	//ptr[3]=>James Lee
	system("PAUSE");
	return 0;
}
