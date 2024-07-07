#include<stdio.h>
int main(){
	int ar[50],n,i,se;
	printf("Enter no. of elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i+=1){
		printf("Enter the element: ");
		scanf("%d",&ar[i]);
	}
	printf("Enter the value to be searched: ");
	scanf("%d",&se);
	for(i=0;i<n;i+=1){
		if(ar[i]==se){
			break;
		}
	}
	if(i<n){
		printf("The element is found.");
		
	}
	else{
		printf("The element is not found");
	}
	return 0;
}
