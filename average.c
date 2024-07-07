#include<stdio.h>
int main(){
	float m1,m2,m3,m4,m5,avg;
	printf("Enter marks for the following subjects:\n");
	printf("Maths: ");
	scanf("%f",&m1);
	printf("English: ");
	scanf("%f",&m2);
	printf("Physics: ");
	scanf("%f",&m3);
	printf("Chemistry: ");
	scanf("%f",&m4);
	printf("computer: ");
	scanf("%f",&m5);
	avg=(m1+m2+m3+m4+m5)/5;
	if(avg>=95){
		printf("The grade is 'O'");
	}
	else if(avg>=90&&avg<95){
		printf("The grade is 'A+'");
	}
	else if(avg>=85&&avg<90){
    	printf("The grade is 'A'");	
	}
	else if(avg>=80&&avg<85){
		printf("The grade is 'B+'");	
	}
	else if(avg>=75&&avg<80){
		printf("The grade is 'B'");	
	}
	else if(avg>=70&&avg<75){
		printf("The grade is 'C+'");
	}
	else if(avg>=65&&avg<70){
		printf("The grade is 'C'");
	}
	else if(avg>=60&&avg<65){
		printf("The grade is 'D+'");
	}
	else if(avg>=55&&avg<60){
		printf("The grade is 'D'");
	}
	else if(avg>=50&&avg<55){
		printf("The grade is 'E'");
	}
	else{
		printf("The grade is 'F'");
	}
		return 0;
}
