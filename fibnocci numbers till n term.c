#include<stdio.h>
int main(){
	int n,a=0,b=1,c,i;
	printf("Enter no. of terms: ");
	scanf("%d",&n);
	printf("The fibnocci series is:\n");
	printf("%d %d ",a,b);
	for(i=3;i<=n;i+=1){
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
	return 0;
}

