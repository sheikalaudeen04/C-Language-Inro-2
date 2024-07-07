 #include<stdio.h>
int main(){
	int n,i,ar[50],flag=0;
	printf("Enter no. of elements.\n");
	scanf("%d",&n);
	for(i=0;i<n;i+=1){
		printf("Enter the element: ");
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n;i+=2){
		if (ar[i]%2==0){
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("All elements of even index are  odd.");
	}
	else{
		printf("All elements of even index are not odd.");
	}
	return 0;
}
