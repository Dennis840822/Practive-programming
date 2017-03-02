#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i,b,sum;
	int j=5;
	scanf("%d",&sum);
	int an[sum][j];
	for(i=0;i<=sum-1;i++){
		for(j=0;j<4;j++){
			scanf("%d",&an[i][j]);
		}
	}
	for(i=0;i<=sum-1;i++){
		for(j=0;j<4;j++){
			printf("%d ",an[i][j]);
		}
		if( ((an[i][3]%an[i][2]) == 0) &&  ((an[i][2]%an[i][1]) == 0)  &&  ((an[i][1]%an[i][0]) == 0)){
			b = an[i][3]/an[i][2];
			b = an[i][3]*b;
			//printf("%d\n",an[i][3]);
		}
		else if( ((an[i][3]-an[i][2]) == (an[i][2]-an[i][1])) &&  ((an[i][2]-an[i][1]) == an[i][1]-an[i][0]) ){
			b = an[i][3]-an[i][2];
			b = an[i][3]+b;
			//printf("%d\n",an[i][3]);
		}
		else{
			printf("既不是等比也不是等差，請重新輸入\n");
		}
		printf("%d",b);
		printf("\n");
	}
	
	return 0;
}
