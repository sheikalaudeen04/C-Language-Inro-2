#include<stdio.h>
int main(){
	/*Obtaining addresses*/
	int a,b;
	printf("a adrs----> %d\n",&a);
	printf("b adrs----> %d\n",&b);
	/*obtaining sizes of elements*/
	int ar[2];
	printf("array adrs--->%d\n",&ar);
	printf("%d",sizeof(ar));
	double ar1[]={1,2,3};
	printf("\n%d",sizeof(ar1));
	printf("\n%d",sizeof(ar1[1]));
	/*length of an array
	length= total size/ size of single element*/
	int l;
	l=sizeof(ar1)/sizeof(ar1[0]);
	printf("\n%d",l);
	return 0;
}
