#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char a[10];
	//scanf("%s",a);//�i��r��Ū�J�A�J��Ů�N���e�פ� 
	gets(a);//�i��Ū�J�ɫo�O�i�HŪ�J�@��� 
	//printf("%s\n",a); 
	puts(a);//��X�ɡA�|�b�����۰ʴ���U�@��A�۷��printf("%s\n",a) 
	int len;
	len = strlen(a);//����r�ꪺ���סA�ݷf�t"#include <string.h>"��� 
	printf("%d\n",len);
	system("PAUSE");
	return 0;
}
