#include<stdio.h>
int main(){
	char ch;
	printf("Enter the any one of the following character to perform its corresponding function:\n");
	printf("'+'-Addition\n");
	printf("'-'-Subtraction\n");
	printf("'*'-Multiplication\n");
	printf("'/'-Division\n");
	printf("'%%'-Remainder\n");
	printf("'^'-Square\n");
	scanf("%c",&ch);
	switch(ch){
		case '+':{
			float a,b;
			printf("Enter the value of a and b.\n");
			scanf("%f",&a);
			scanf("%f",&b);
			printf("The sum of two numbers is:%f",a+b);
			break;
		}
		case '-':{
			float a,b;
			printf("Enter the value of a and b.\n");
			scanf("%f",&a);
			scanf("%f",&b);
			printf("The difference of two numbers is:%f",a-b);
			break;
		}
		case '*':{
			float a,b;
			printf("Enter the value of a and b.\n");
			scanf("%f",&a);
			scanf("%f",&b);
			printf("The product of two numbers is:%f",a*b);
			break;
		}
		case '/':{
			float a,b;
			printf("Enter the value of a and b.\n");
			scanf("%f",&a);
			scanf("%f",&b);
			printf("The division of two numbers is:%f",a/b);
			break;
		}
		case '%':{
			int a,b;
			printf("Enter the value of a and b.\n");
			scanf("%d",&a);
			scanf("%d",&b);
			printf("The remainder of two numbers is:%d",a%b);
			break;
		}
		case '^':{
			float a;
			printf("Enter the value of a.\n");
			scanf("%f",&a);
			printf("The square of a numbers is:%f",a*a);
			break;
		}
		default:{
			printf("Invalid choice.");
			break;
		}
			
	}
	return 0;
}
