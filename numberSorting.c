#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *numberFile;
    numberFile = fopen("list10.txt", "r");
    int numberList[10];
    int i;

    for (i = 0; i < 16; i++)
    {
        fscanf(numberFile, "%d ", numberList[i]);
        printf("%d\n", numberList[i]);
    }
    fclose(numberFile);
    return 0;
}