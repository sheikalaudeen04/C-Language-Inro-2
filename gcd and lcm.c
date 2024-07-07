#include<stdio.h>
int main(){
	int n1,n2,a,b,gcd,lcm,temp;
	printf("Enter two numbers: ");
	scanf("%d%d",&n1,&n2);
	a=n1;
	b=n2;
	
	//gcd
	while(b!=0){
		temp=b;
		b=a%b;
		a=temp;
	}
	gcd=a;
	
	//lcm
	lcm=(n1*n2)/gcd;
	printf("The GCD and LCM of given numbers are:%d and %d resp.",gcd,lcm);
	return 0;
}
