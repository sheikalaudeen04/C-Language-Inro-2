#include<stdio.h>
int main(){
	char ch;
	printf("Enter a letter: ");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
		printf("The letter is vowel");
	}
	else{
		printf("The letter is consonant");
	}
	return 0;
}
