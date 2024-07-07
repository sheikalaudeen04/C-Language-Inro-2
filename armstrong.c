#include<stdio.h>
#include<math.h>
int main(){
	int t,d,s=0,c=0,i;//n;
	//printf("Enter the number:\n");
	//scanf("%d",&n);
	for(i=100;i<=999;i+=1){
	t=i;
	s=0;
	c=0;
	//if(t==0){
		//c++;
	//}
	//else{
		while(t!=0){
			t=t/10;
			c++;
		}
	//}
	t=i;
	while(t!=0){
		d=t%10;
		d=pow(d,c);
		s=s+d;
		t=t/10;
	
	}
	if(s==i){
		//printf("The number is armstrong");
		printf("%d ",s);
	}
	}
	//else{
		//printf("The number is not armstrong");
	//}
	return 0;
}
