#include<stdio.h>
int main(){
	int ars[5]={1,2,3,4,5};
	ars[1]=6;
	int ar1[4];
	int i;
	
	for(i=0;i<=4;i+=1){
		printf("%d\n",ars[i]);
	}
	
	for(i=1;i<=5;i+=1){
		printf("%d\n",ar1[i]=i);
	}
	return 0;
}
