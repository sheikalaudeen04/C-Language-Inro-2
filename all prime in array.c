/*#include<stdio.h>
int main(){
	int ar[50],i,j,a,n;
	printf("Enter no. of elements.\n");
	scanf("%d",&n);
	for(a=0;a<n;a+=1){
		printf("Enter the element: ");
		scanf("%d",&ar[a]);
	}
	int flag=0;
	for(i=0;i<n;i+=1){
		for(j=2;j<ar[i];j+=1){
			if(ar[i]%j==0){
				flag=1;
				break;
			}
		}
		if(flag==1)
		break;
	}
	if (flag==0){
		printf("All numbers are prime.\n");
	}
	else{
		printf("There is a composite number.");
	}
	return 0;
}*/
#include<stdio.h>
int main(){
	int ar[50],i,j,a,n;
	printf("Enter no. of elements.\n");
	scanf("%d",&n);
	for(a=0;a<n;a+=1){
		printf("Enter the element: ");
		scanf("%d",&ar[a]);
	}
	int c=0;
	for(i=0;i<n;i+=1){
		for(j=2;j<ar[i];j+=1){
			if(ar[i]%j==0){
				c++;
				break;
			}
		}
	}
	if (c==n){
		printf("All numbers are composite.\n");
	}
	else{
		printf("There is a prime number.");
	}
	return 0;
}
