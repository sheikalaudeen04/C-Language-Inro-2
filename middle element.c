#include<stdio.h>
int main(){
	int ar[50],i,n,m1,m2,m;
	printf("Enter no. of elements.\n");
	scanf("%d",&n);
	for(i=0;i<n;i+=1){
		printf("Enter the element: ");
		scanf("%d",&ar[i]);
	}
	if(n%2==0){
		m1=(n/2)-1;
		m2=m1+1;
		printf("The middle elements are:%d and %d",ar[m1],ar[m2]);
	}
	else{
		m=(n/2);
		printf("The middle element is:%d",ar[m]);
	}
	return 0;
}

	
