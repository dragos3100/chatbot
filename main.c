#include <stdio.h>

int main() {
    printf("Let's chat\n");
    char userImput[20];
    gets(userImput);
    printf("Hi! to you too. Iam Hall What's your name?\n");
    char name[20];
    scanf("%s",name);
    printf("Oh hi, %s What's your age?\n",name);
    int age;
    scanf("%d",&age);
    printf("Wow. %d is quite something\n",age);
    gets(userImput);
    gets(userImput);
    printf("Sory, not sure what this\"%s\" means Bye",userImput);


    return 0;
}