#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	//strcmp�O�ΨӤ���Ҧ��r��b�r�夤�����ǡA�H�r�ꭺ��r������� 
	gets(a);
	gets(b);
	if(strcmp(a,b) <= 0){
		puts(a);
		puts(b);
	}
	else{
		puts(b);
		puts(a);
	}
	system("PAUSE");
	return 0;
}
/*if(strcmp(a,b) < 0){  a�bb�e���A�^��(��^��)���p��0 
		puts(a);
		puts(b);
}
else if(strcmp(a,b) > 0){  a�bb�᭱�A�^��(��^��)���j��0 
		puts(b);
		puts(a);
}
else if(strcmp(a,b) == 0){  a�Mb���P�@�r��A�^��(��^��)��0 
		puts(a);
		puts("�@�˪�");
}
