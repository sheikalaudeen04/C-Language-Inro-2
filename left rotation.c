#include<stdio.h>
int main(){
    int arr[100],d,i,n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the value for %dth index: ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the number of positions to rotate left: ");
    scanf("%d",&d);
    int temp[d];
    for(i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(i=0;i<d;i++){
        arr[n-d+i]=temp[i];
    }
    printf("Array after left rotation: ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}

