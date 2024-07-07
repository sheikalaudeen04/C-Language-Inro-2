//wap to create a do while loop for a menu of ice cream parlour
#include<stdio.h>
int main(){
	int n,s;
	float t=0;
	do{
		printf("\nEnter the flavour from the menu below:\n1-Vanilla\n2-Strawberry\n3-Chocolate\n4-Butterscotch\n5-Blueberry\nClick any other no. to exit.\nEnter your choice: ");
		scanf("%d",&n);
		switch(n){
			case 1:{
				printf("vanilla:~\n");
				printf("Enter how many scoops: ");
				scanf("%d",&s);
				t+=s*10.0;
				printf("The cost is:%.2f",s*10.0);
				break;
			}
			case 2:{
				printf("Strawberry:~\n");
				printf("Enter how many scoops: ");
				scanf("%d",&s);
				t+=s*20.0;
				printf("The cost is:%.2f",s*20.0);
				break;
			}
			case 3:{
				printf("Chocolate:~\n");
				printf("Enter how many scoops: ");
				scanf("%d",&s);
				t+=s*25.0;
				printf("The cost is:%.2f",s*25.0);
				break;
			}
			case 4:{
				printf("Butterscotch:~\n");
				printf("Enter how many scoops: ");
				scanf("%d",&s);
				t+=s*25.0;
				printf("The cost is:%.2f",s*25.0);
				break;
			}
			case 5:{
				printf("Blueberry:~\n");
				printf("Enter how many scoops: ");
				scanf("%d",&s);
				t+=s*30.0;
				printf("The cost is:%.2f",s*30.0);
				break;
			}		
		}
	}while((n==1)||(n==2)||(n==3)||(n==4)||(n==5));
	printf("The total cost is:%.2f",t);
		    
}
