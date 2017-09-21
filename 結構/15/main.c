#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct data{
	char name[10];
	int math;
};
typedef struct data SCORE;
void display(SCORE);

int main(int argc, char *argv[]) 
{
	SCORE s1 = {"Jenny",74};
	display(s1);
	
	system("PAUSE");	
	return 0;
}
void display(SCORE st){
	printf("學生姓名： %s\n",st.name);
	printf("數學成績： %d\n",st.math);
}
