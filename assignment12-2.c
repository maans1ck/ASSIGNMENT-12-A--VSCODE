#include<stdio.h>
struct Student{
    int roll;
    char name[10];
    float marks[3];
    float avg; 
};

int main()
{
    struct Student s[100];
    int n, i;
    float highest = 0;

    printf("Enter the number of students = ");
    scanf("&d", &n);

    if (n <= 0 || n > 100)
    {
        printf("Invalid number of students!");
    }

    for(int i = 0; i < n; i++)
    {
        printf("\nEnter roll number = ");
        scanf("%d", &s.roll[i]);
        
        printf("\nEnter Name = ");
        scanf("%s", s.name[i]);

        printf("Enter Marks in three subjects = ");
        for(int j = 0; j < 3; j++);
        {
            scanf("%f", &s.marks[j]);
        }

        if(s.roll[i] <= 0 || s.marks[j] <= 0)
        {
            printf("Invalid Input! Start again");
            goto end;
        }
    }
    
    end:
    return 0;
}