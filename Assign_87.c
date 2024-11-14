// WRITE A PROGRAM TO READ INFORMATION OF 10 STUDENT AND DISPLAY THE 
//INFORMATION OF THOSE STUDENT WHOSE MARKS ARE GREATHER THAN 500.(PASSING 
//ARRAY OF STRUCTURE INTO FUNCTION). 
#include <stdio.h>
#include <conio.h>
#include <string.h>
struct studentInfo
{
   int rollno;
   float marks;
   char name[100];
}st[10];   
   
int main()
{
    printf("Enter the info(rollno,name,marks)of the 10 students:\n");
    for(int i=1;i<=10;i++)
    {
        printf("rollno:\t");
        scanf("%d",&st[i].rollno);
        printf("name:\t");
        scanf("%s",&st[i].name);
        printf("marks:\t");
        scanf("%f",&st[i].marks);
    }
    for(int i=1;i<=10;i++)
    {
        if(st[i].marks>=500)
        {
            printf("rollno:%d\n",st[i].rollno);
            printf("name:%s\n",st[i].name);
            printf("marks:%f\n",st[i].marks);
        }
    }
return 0;
}            
            
        
