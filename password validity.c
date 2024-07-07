#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char s[100];
	int i,uc=0,lc=0,dg=0,sp=0;
	printf("Enter your password:\n");
	gets(s);
	for(i=0;s[i]!='\0';i+=1){
		if(isupper(s[i])){
			uc=1;
		}
		else if(islower(s[i])){
			lc=1;
		}
		else if(isdigit(s[i])){
			dg=1;
		}
		else{
			sp=1;
		}
			
	}
	i=0;
	while(s[i]!='\0')
		i++;
	if(i>=8){
	if(uc&&lc&&dg&&sp){
		printf("valid");
	}
	else{
		printf("Invalid");
	}}
	else{
		printf("Weak");
	}
	
}
