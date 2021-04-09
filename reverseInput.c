#include <stdio.h>
#include <string.h>

int main()
{
    char word[100], ch;

    printf("Please enter a word or phrase (maximum of 100 characters):\n");
    int i = 0;
    ch = getchar();

    while ((ch != '\n') && (i <= 100))
    {
        word[i] = ch;
        i++;
        ch = getchar();
    }

    word[i] = '\0';
    int len = (strlen(word) - 1);
    
    for (int i = len; i >= 0; i--)
    {
        printf("%c", word[i]);
    }
    printf("\n");

    return 0;
}