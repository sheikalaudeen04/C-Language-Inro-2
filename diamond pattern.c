#include<stdio.h>
int main(){
    int n,i,j,space;
    printf("Enter the number of rows (odd number): ");
    scanf("%d",&n);
    if(n%2==0){
        printf("Please enter an odd number.\n");
        return 0;
    }
    space=n/2;
    // Upper part of the diamond
    for(i=1;i<=n/2+1;i++){
        // Print spaces
        for(j=1;j<=space;j++){
            printf(" ");
        }
        // Print asterisks
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
        space--;
    }
    space=1;
    // Lower part of the diamond
    for(i=n/2;i>=1;i--){
        // Print spaces
        for(j=1;j<=space;j++){
            printf(" ");
        }
        // Print asterisks
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
        space++;
    }
    return 0;
}

