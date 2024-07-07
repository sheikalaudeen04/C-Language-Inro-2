#include<stdio.h>
int main(){
	int ar[100],n,i,t,r=0,d;
	printf("Enter no of elements: ");
	scanf("%d",&n);
	printf("Enter elements of array:\n");
	for(i=0;i<n;i+=1){
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n;i+=1){
		t=ar[i];
		r=0;
		while(t!=0){
			d=t%10;
			r=r*10+d;
			t=t/10;
		}
		if(r==ar[i]){
			break;
		}
	}
	if(i<n){
		printf("palindrom element present in array at index %d",i);
	}
	else
		printf("NO palindrome found");
		return 0;
}
