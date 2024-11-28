// WRITE A C PROGRAM TO ADD /APPEND INFORMATION TO THE FILE “LNMIITSTUDENT.DAT”.
#include <stdio.h>
#include <string.h>

int main() 
{
    FILE *ptr = fopen("LNMIITSTUDENT.DAT", "a");
    if (ptr == NULL) 
    {
        printf("Error opening file for appending.\n");
        return 1;
    }

    int n;
    printf("How many students' details to append? \n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        {
        printf("\nEnter details of Student %d\n", i + 1);

        int roll, marks;
        char name[50];

        printf("Enter roll number: ");
        scanf("%d", &roll);

        getchar();  // To consume the newline character left by scanf
        printf("Enter name: ");
        fgets(name, sizeof(name), stdin);

        size_t len = strlen(name);
        if (len > 0 && name[len - 1] == '\n') {
            name[len - 1] = '\0';
        }

        printf("Enter marks: ");
        scanf("%d", &marks);

        fprintf(ptr, "%d %s %d\n", roll, name, marks);
    }

    fclose(ptr);

    printf("Student details have been appended to LNMIITSTUDENT.DAT.\n");

    return 0;
}
