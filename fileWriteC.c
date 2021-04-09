#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char *text;
    FILE *fp;

    printf("Enter limit of the text:\n");
    scanf("%d", &n);
    text=(char*)malloc(n*sizeof(char));

    printf("Please type what you would like written to the file. When finished, hit 'Enter' and type 'EXIT'.\n");
    
    FILE *fopen(const char * fileWritingInC, const char * a);

    while (text != "EXIT")
    {
        scanf(" ");
        gets(text);
        fprintf(fp, text);
        free(text);
    }

    int fclose(FILE *fp);

    printf("Your file, fileWritingInC.txt, has been written.\n");
    
    return 0; 
}