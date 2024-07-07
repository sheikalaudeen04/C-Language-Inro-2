#include<stdio.h>
int main(){
	int n,d,t;
	//get the number
	printf("Enter the num: ");
	scanf("%d",&n);
	//seperating digit by digit
	t=n;
	while(t!=0){
		d=t%10;
		switch(d){
			case 0:
				printf("0-Zero ");
				break;
			case 1:
				printf("1-One ");
				break;
			case 2:
				printf("2-Two ");
				break;
			case 3:
				printf("3-Three ");
				break;
			case 4:
				printf("4-Four ");
				break;
			case 5:
				printf("5-Five ");
				break;
			case 6:
				printf("6-Six ");
				break;
			case 7:
				printf("7-Seven ");
				break;
			case 8:
				printf("8-Eight ");
				break;
			case 9:
				printf("9-Nine ");
				break;
		}
		t=t/10;
	}
	return 0;
}
