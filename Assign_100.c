// A FILE CALLED “LNMIITSTUDENT.JAVA” CONTAINS INFORMATION SUCH AS STUDENT ROLL 
//NUMBER, NAME AND TOTAL MARKS. WRITE A C PROGRAM TO CREATE A FILE TO STORE DETAILS OF N 
//STUDENTS.

#include <stdio.h>
#include <string.h>

int main() 
{
    FILE *ptr = fopen("LNMIITSTUDENT.JAVA", "w");
    if (ptr == NULL) 
    {
        printf("Error opening file for writing.\n");
        return 1;
    }

    int n;
    printf("How many students' details to input? \n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) 
    {
        printf("\nEnter details of Student %d\n", i + 1);

        int roll, marks;
        char name[50];

        printf("Enter roll number: ");
        scanf("%d", &roll);

        getchar();
        printf("Enter name: ");
        fgets(name, sizeof(name), stdin);

        size_t len = strlen(name);
        if (len > 0 && name[len - 1] == '\n') 
        {
            name[len - 1] = '\0';
        }

        printf("Enter marks: ");
        scanf("%d", &marks);

        fprintf(ptr, "%d %s %d\n", roll, name, marks);
    }

    fclose(ptr);

    ptr = fopen("LNMIITSTUDENT.JAVA", "r");
    if (ptr == NULL) 
    {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\nStudent details read from the file:\n");
    int roll, marks;
    char name[50];
    while (fscanf(ptr, "%d %[^\n]%d", &roll, name, &marks) == 3) {
        printf("Roll Number: %d\n", roll);
        printf("Name: %s\n", name);
        printf("Marks: %d\n", marks);
        printf("\n");
    }

    fclose(ptr);

    return 0;
}
