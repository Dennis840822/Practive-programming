#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct data{
	char name[10];
	int math;
};

void display(struct data);

int main(int argc, char *argv[]) 
{
	struct data s1 = {"Jenny",74};
	display(s1);
	
	system("PAUSE");
	return 0;
}

void display(struct data st){
	printf("學生姓名：%s\n",st.name);//用s1亦可 
	printf("數學成績：%d\n",st.math);
}
