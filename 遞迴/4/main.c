#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void display(char,int);

int acklalsdkclasd;//這就是全域變數 
int main(int argc, char *argv[])//這是區域變數(在main函數中) 
{
	int n;
	char ch;
	printf("請輸入欲列印的字元");
	scanf("%c",&ch);
	printf("請問要印出幾個字元");
	scanf("%d",&n);
	
	display(ch,n);
	
	system("PAUSE");
	return 0;
}
//使用相同的變數名稱。雖然變數名稱相同，但它們位於不同的函數內，因此編譯器就會把它們看成是不同的變數。 
void display(char ch,int n){//這是區域變數(在dispaly函數中)
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
