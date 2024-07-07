#include<stdio.h>
int main(){
	int a1[100][100],a2[100][100],d[100][100],i,n,j;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(i=0;i<n;i+=1){
		for(j=0;j<n;j+=1){
			printf("Enter the value for first array index %d%d: ",i,j);
			scanf("%d",&a1[i][j]);
		}
	}
	for(i=0;i<n;i+=1){
		for(j=0;j<n;j+=1){
			printf("Enter the value for second array index %d%d: ",i,j);
			scanf("%d",&a2[i][j]);
		}
	}
	for(i=0;i<n;i+=1){
		for(j=0;j<n;j+=1){
			d[i][j]=a1[i][j]-a2[i][j];
		}
	}
	printf("\nThe sum of the matrix is:\n");
	for(i=0;i<n;i+=1){
		for(j=0;j<n;j+=1){
			printf("%d ",d[i][j]);
		}
		printf("\n");
	}
	return 0;
}
