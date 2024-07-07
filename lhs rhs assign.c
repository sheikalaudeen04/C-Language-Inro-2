#include<stdio.h>
main(){
	float a,b,c,lhs,rhs;
	printf("Enter the values of a,b,c:\n");
	scanf("%f""%f""%f",&a,&b,&c);
	lhs=a*(b+c);
	printf("The value of A*(B+C)=%f\n",lhs);
	rhs=(a*b)+(a*c);
	printf("The value of (A*B)+(A*C)=%f\n",rhs);
	if(lhs==rhs){
		printf("The LHS is equal to RHS. Hence proved!");
	}
	}
