#include <stdio.h>
int binarySearch(int ar[],int l,int r,int se){
    while(l<=r){
        int mid=(l+r)/2;
        if(ar[mid]==se)
            return mid;
        if(ar[mid]<se)
            l=mid+1;
        else
            r=mid-1;
    }
    return -1;
}
void BubbleSort(int ar[],int n){
	
	int i,j,temp;
	for(i=0;i<n;i+=1){
		for(j=0;j<n-i-1;j+=1){
			if(ar[j]>ar[j+1]){
				temp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;
			}
		}
	}
}
int main(){
	int n,ar[100],se,i,res;
	printf("ENter value of n: ");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i+=1){
		scanf("%d",&ar[i]);}
	printf("ENter search element: ");
	scanf("%d",&se);
	BubbleSort(ar,n);
    res=binarySearch(ar,0,n-1,se);
    if(res==-1){
    	printf("Element is not present in array");
	}w
	else{
		printf("Element is present at index %d",res);
	}
    return 0;
}

