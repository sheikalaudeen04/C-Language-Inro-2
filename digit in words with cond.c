/*Construct a C program for each integer n in the interval [a, b]
(given as input) :
If ,1<=n<=9, then print the English representation of it in
lowercase. That is "one" for 1, "two" for 2, and so on.
Else if n>9 and it is an even number, then print "even".
Else if n>9 and it is an odd number, then print "odd".
The first line contains an integer, a.
The second line contains an integer, b. */
#include<stdio.h>
int main(){
	int a,b,n;
	printf("Enter the interval for a and b: ");
	scanf("%d%d",&a,&b);
	for(n=a;n<=b;n+=1){
		if(n>=1&&n<=9){
			switch(n){
			case 0:
				printf("%d-Zero\n",n);
				break;
			case 1:
				printf("%d-one\n",n);
				break;
			case 2:
				printf("%d-Two\n",n);
				break;
			case 3:
				printf("%d-Three\n",n);
				break;
			case 4:
				printf("%d-Four\n",n);
				break;
			case 5:
				printf("%d-Five\n",n);
				break;
			case 6:
				printf("%d-Six\n",n);
				break;
			case 7:
				printf("%d-Seven\n",n);
				break;
			case 8:
				printf("%d-Eight\n",n);
				break;
			case 9:
				printf("%d-Nine\n",n);
				break;
		}
		}
		else if(n>9){
			if(n%2==0){
				printf("Even");
				break;
			}
			else{
				printf("Odd");
				break;
			}
	}
		}
	return 0;
}
