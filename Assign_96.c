#include <stdio.h>
#include <string.h>

void sortStrings(char **str, int n)
{
    char *temp;

    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (strcmp(str[j], str[j + 1]) > 0) 
            {
                // Swap the strings using pointers
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main() 
{
    int n;

    printf("Enter the number of strings: ");
    scanf("%d", &n);

    // Allocate memory for an array of n strings
    char **str = (char **)malloc(n * sizeof(char *));

    printf("Enter the strings:\n");
    for (int i = 0; i < n; i++)
    {
        str[i] = (char *)malloc(100 * sizeof(char)); // Adjust the size as needed
        scanf("%s", str[i]);
    }

    sortStrings(str, n);

    printf("Sorted strings:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", str[i]);
    }

    // Free the allocated memory
    for (int i = 0; i < n; i++)
    {
        free(str[i]);
    }
    free(str);

    return 0;
}

