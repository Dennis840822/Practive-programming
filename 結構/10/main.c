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
	printf("�ǥͩm�W�G%s\n",st.name);//��s1��i 
	printf("�ƾǦ��Z�G%d\n",st.math);
}
