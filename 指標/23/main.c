#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i;
	char *ptr[3] = {"Tom","Lily","James Lee"};
	//用指標陣列不會造成空間使用浪費
	//而使用一般(一維或二維)往往造成空間浪費 
	for(i=0;i<3;i++){
		puts(ptr[i]);
	}
	
	system("PAUSE");
	return 0;
}
