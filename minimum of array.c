#include<stdio.h>
int main(){
	int a[100],i,min,n;
	printf("Enter number of elements in an array: ");
	scanf("%d",&n);
	for(i=0;i<n;i+=1){
		printf("Enter the element: ");
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=1;i<=n;i+=1){
		if(min>a[i]){
			min=a[i];
		}
	}
	printf("The minimum element of array is:%d",min);
	return 0;
}
