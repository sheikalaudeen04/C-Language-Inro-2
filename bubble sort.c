#include<stdio.h>
int main(){
	int n,i,ar[50],j,temp;
	printf("Enter no. of elements.\n");
	scanf("%d",&n);
	for(i=0;i<n;i+=1){
		printf("Enter the element:");
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n;i+=1){
		for(j=0;j<n-i-1;j+=1){
			if(ar[j]>ar[j+1]){
				temp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;
			}
		}
	}
	printf("The sorted array is:\n");
	for(i=0;i<n;i+=1){
		printf("%d\n",ar[i]);
	}
	return 0;
}
