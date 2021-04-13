#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFFER_SIZE 10000

int main()
{
    FILE *fptr;
    fptr = fopen("fileWritingInC.txt", "a");
    char i[BUFFER_SIZE];
    printf("Please type what you would like to write to a file.\nWhen you are finished, hit 'Enter', type 'EXIT', and hit 'Enter' again.\n");
    fgets(i, BUFFER_SIZE, stdin);
    while (strcmp(i, "EXIT\n") != 0)
    {
        fprintf(fptr, "%s", i);
        fgets(i, BUFFER_SIZE, stdin);
    }
    fclose(fptr);
    printf("Your file, 'fileWritingInC.txt', has been written.\n");
    return 0;
}