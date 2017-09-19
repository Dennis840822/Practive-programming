#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct data{
	char name[10];
	int math;
};

void swap(struct data * ,struct data * );

int main(int argc, char *argv[]) 
{
	struct data s1 = {"Jenny",74};
	struct data s2 = {"Teresa",88};
	
	swap(&s1,&s2);
	
	printf("©I¥sswap()¨ç¼Æ«á¡G\n");
	printf("s1.name=%s,s1.math=%d\n",s1.name,s1.math);
	printf("s2.name=%s,s2.math=%d\n",s2.name,s2.math);
	
	system("PAUSE");
	return 0;
}
void swap(struct data *p1,struct data *p2){
	struct data tmp;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
