#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char *text;

    printf("Enter limit of the text:\n");
    scanf("%d", &n);
     text=(char*)malloc(n*sizeof(char));

    printf("Please type what you would like written to the file. When finished, hit 'Enter' and type 'EXIT'.\n");
    scanf(" ");
    gets(text);

    printf("%s\n", text);

    free(text);

    return 0;
    
}