#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void display(char,int);

int acklalsdkclasd;//�o�N�O�����ܼ� 
int main(int argc, char *argv[])//�o�O�ϰ��ܼ�(�bmain��Ƥ�) 
{
	int n;
	char ch;
	printf("�п�J���C�L���r��");
	scanf("%c",&ch);
	printf("�аݭn�L�X�X�Ӧr��");
	scanf("%d",&n);
	
	display(ch,n);
	
	system("PAUSE");
	return 0;
}
//�ϥάۦP���ܼƦW�١C���M�ܼƦW�٬ۦP�A�����̦�󤣦P����Ƥ��A�]���sĶ���N�|�⥦�̬ݦ��O���P���ܼơC 
void display(char ch,int n){//�o�O�ϰ��ܼ�(�bdispaly��Ƥ�)
	int i;
	for(i=1;i<=n;i++){
		printf("%c",ch);
	}
	printf("\n");
	return;
}
/*
void display(char a,int b){
	int i;
	for(i=1;i<=b;i++){
		printf("%c",a);
	}
	printf("\n");
	return;
}
*/
