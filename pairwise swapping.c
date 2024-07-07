#include<stdio.h>
int main(){
	int ar[100],n,temp,i;
	printf("Enter no of elements: ");
	scanf("%d",&n);
	printf("Enter elements of array:\n");
	for(i=0;i<n;i+=1){
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n/2;i+=1){
		temp=ar[i];
		ar[i]=ar[n-i-1];
		ar[n-i-1]=temp;
	}
	printf("Elements of array:\n");
	for(i=0;i<n;i+=1){
		printf("%d ",ar[i]);
	}
	return 0;
}
