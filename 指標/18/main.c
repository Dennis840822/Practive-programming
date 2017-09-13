#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char name [20];
	char *ptr = "How are you?";
	printf("what`s your name?");
	gets(name);
	printf("Hi, %s, ",name);
	puts(ptr);
	
	system("PAUSE");
	return 0;
}
