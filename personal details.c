#include<stdio.h>
int main() {
    char name[50],state[100],country[20],ch;
    int age;
    printf("Enter your Name: ");
    gets(name);
    printf("Enter your Age: ");
    scanf("%d",&age);
    scanf("%c",&ch);
    printf("Enter your State: ");
    gets(state);
    printf("Enter your country: ");
    gets(country);
     
    printf("Personal Details:\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("State: %s\n", state);
    printf("Country: %s\n", country);
    return 0;
}
