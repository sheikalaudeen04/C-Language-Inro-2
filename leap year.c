#include<stdio.h>
int main(){
	int y;
	printf("Enter the year: ");
	scanf("%d",&y);
	if((y%4==0&&y%100!=0)||(y%400==0)){
		printf("The year is leap");
	}
	else{
		printf("The year is not leap");
	}
	
	return 0;
}
