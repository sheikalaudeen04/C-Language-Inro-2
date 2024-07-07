#include<stdio.h>
int main(){
	int i,n,m;
	printf("Enter number of terms: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		m=5*i;
		printf("5X%d=%d\n",i,m);		
	}
	return 0;
}
