#include<stdio.h>
int main(){
	char name[100];
	int id;
	float u,am,s;
	printf("Enter the name: ");
	gets(name);
	printf("Enter the ID: ");
	scanf("%d",&id);
	printf("Enter the units consumed: ");
	scanf("%f",&u);
	if(u<=199){
		am=u*1.20;
	}
	else if((u>=200)&&(u<400)){
		am=u*1.50;
	}
	else if((u>=400)&&(u<600)){
		am=u*1.80;
	}
	else{
		am=u*2.00;
	}
	
	if(am>400){
		s=am*0.15;
		am+=s;
	}
	if(am<100){
		am=100;
	}
	printf("Details:\n");
	printf("Name:%s\n",name);
	printf("ID:%d\n",id);
	printf("Units consumed:%f\n",u);
	printf("Amount to be paid:%f",am);
	return 0;
}
