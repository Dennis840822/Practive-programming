#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	/*char a;
	a = getchar();//�Pscanf�@�˥\��A�N��rŪ�J�w�İϡA�ä��|�۰�����A����ϥΪ̫��UEnter�A��r�~�|�Q���� 
	printf("%c",a);*/
	//getchar()=>Ū���@�Ӧr���A��J�ᵥ�ݨϥΪ̫��UEnter�䵲��(��ܿ�J�r��)�C 
	//getche()=>Ū���@�Ӧr���A��J�ᵥ�ݨϥΪ̫��UEnter�䵲��(��ܿ�J�r��)�C 
	//getch()=>Ū���@�Ӧr���A��J�ᵥ�ݨϥΪ̫��UEnter�䵲��(����ܿ�J�r��)�C
	char a;
	a = getche();//�o�ӫh�O��J��r�A�q�����W�N��L�X��r�A���ݭn�A�h�@�ӨB�J���UEnter
	printf("\n%c\n",a); 
	system("PAUSE");
	return 0;
}
