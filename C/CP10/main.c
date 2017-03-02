#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	/*char a;
	a = getchar();//與scanf一樣功能，將文字讀入緩衝區，並不會自動釋放，直到使用者按下Enter，文字才會被釋放 
	printf("%c",a);*/
	//getchar()=>讀取一個字元，輸入後等待使用者按下Enter鍵結束(顯示輸入字元)。 
	//getche()=>讀取一個字元，輸入後等待使用者按下Enter鍵結束(顯示輸入字元)。 
	//getch()=>讀取一個字元，輸入後等待使用者按下Enter鍵結束(不顯示輸入字元)。
	char a;
	a = getche();//這個則是輸入文字，電腦馬上就能印出文字，不需要再多一個步驟按下Enter
	printf("\n%c\n",a); 
	system("PAUSE");
	return 0;
}
