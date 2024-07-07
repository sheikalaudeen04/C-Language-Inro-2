#include<stdio.h>
int main(){
	int i,n,ar[50],max;
	printf("Enter no. of elements.\n");
	scanf("%d",&n);
	for(i=0;i<n;i+=1){
		printf("Enter the element: ");
		scanf("%d",&ar[i]);
	}
	max=ar[0];
	for(i=1;i<n;i+=1){
		if (max<ar[i]){
			max=ar[i];
		}
	}
	printf("The maximum element of the array is:%d",max);
	return 0;
}
