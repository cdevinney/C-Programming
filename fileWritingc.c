#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char text[100];
    char input[200];
    int compNum;
    //FILE *fp;

    printf("Please type what you would like written to the file (maximum 100 characters).\n");
    fgets(text, 100, stdin);

    while (compNum != 0)
    {
        fgets(text, 200, stdin);
        compNum = strcmp("EXIT\n", text);
    }

    printf(input);

    
    //FILE *fopen(const char * fileWritingInC, const char * w);

    
    //int fclose(FILE *fp);

    //printf("Your file, fileWritingInC.txt, has been written.\n");
    
    return 0; 
}