#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char a;
	scanf("%c",&a);//&為取值運算子；用途為得到小房子a的位址。你可能已經會問，為什麼在讀入的時候要得到小房子a的地址，而輸入卻不需要呢？
	//因為在讀入資料的時候，電腦需要把讀入的值放入小房子a(也就是變數a)中，需要你指定的這個小房子a的位址，才能把值成功地放進小房子a中，但是在輸出的時候，值已經在
	//小房子a中，就可以直接輸出到螢幕上 。 
	printf("下一個字元：%c\n",a+1);
	printf("%d\n",10+20);
	if(2>=2)
	printf("yes\n");
	else
	printf("NO\n");
	if(1)
	printf("yes\n");
	else
	printf("NO\n");
	if(-5)
	printf("yes\n");
	else
	printf("NO\n");
	if(0)
	printf("yes\n");
	else
	printf("NO\n");
	while(0)
	printf("NO\n");
	/*while(1)
	printf("yes\n");*/
	/*while(1>0)
	printf("1");*/
	system("color 0a");
	while(1>0)
	printf("0 1");
	system("PAUSE");
	return 0;
}
