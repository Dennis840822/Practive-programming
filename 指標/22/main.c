#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//��20�ӵ{���X�@�ܧ� 
int main(int argc, char *argv[]) 
{
	char name[20];//name�O���б`�ơA�ȵL�k��� 
	char *ptr = "How are you";
	printf("what`s your name?");
	gets(++name);//������L��J���Ȩæs��b�r��name�̭� 
	printf("Hi, %s, ",name);
	puts(++ptr);//�����L�X�����ܼ�ptr���� 
	
	system("PAUSE");
	return 0;
}
