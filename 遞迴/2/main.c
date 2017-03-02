#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*int add(int,int);
int main(int argc, char *argv[]) 
{
	int sum,a=5,b=3;
	sum = add(a,b);
	printf("%d+%d=%d\n",a,b,sum);
	
	system("PAUSE");
	return 0;
}
int add(int a,int b){
	int c;
	c= a+b;
	return c;
}*/

//實驗證明第9行add(a,b)內的數字只是負責傳遞給副程式的引數而已 
//而副程式內的引數名稱只是個代稱(號)，並無影響數字傳遞的過程與結果 

int add(int,int);
int main(int argc, char *argv[]) 
{
	int sum,a=5,b=3;
	sum = add(a,b);
	printf("%d+%d=%d\n",a,b,sum);
	
	system("PAUSE");
	return 0;
}
int add(int a,int b){
	int sum;
	sum = a+b;
	return sum;
}
