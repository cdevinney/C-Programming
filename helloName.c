#include <stdio.h>

int main()
{
    char name [6];
    printf("What is your name?");
    fgets(name, 7, stdin);
    printf("Hello, %s!\n", name);
    return 0;
}