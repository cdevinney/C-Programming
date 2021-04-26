#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *numberFile;
    numberFile = fopen("list10k.txt", "r");
    int numList[10000];
    int i;

    for (i = 0; i < 10000; i++)
    {
        fscanf(numberFile, "%d ", &numList[i]);
        for (int j = 0; j < 10000; j++)                    
	    {
            if (numList[j] < numList[i])               
			{
				int tmp = numList[i];         
				numList[i] = numList[j];          
				numList[j] = tmp;             
			}
		}
    }

    for (int i = 0; i < 10000; i++)                     
	{
		printf("%d\n", numList[i]);                   
	}
    fclose(numberFile);
    return 0;
}