#include <stdio.h>
#include <stdlib.h>

void quicksort(int number[10],int first,int last)
{
    int i, j, pivot, temp;
    if(first<last)
    {
        pivot=first;
        i=first;
        j=last;
        while(i<j)
        {
            while(number[i]<=number[pivot]&&i<last)
                i++;
                    while(number[j]>number[pivot])
                        j--;
                            if(i<j)
                            {
                                temp=number[i];
                                number[i]=number[j];
                                number[j]=temp;
                            }
        }
        temp=number[pivot];
        number[pivot]=number[j];
        number[j]=temp;
        quicksort(number,first,j-1);
        quicksort(number,j+1,last);
    }
}

int main()
{
    FILE *numberFile;
    numberFile = fopen("list10.txt", "r");
    int numList[10];
    int i;
    
    for (int i = 0; i < 10000; i++)                     
	{
		printf("%d\n", numList[i]);                   
	}

    fclose(numberFile);
    return 0;
}