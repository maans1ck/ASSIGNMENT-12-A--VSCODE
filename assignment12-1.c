#include<stdio.h>
#include<string.h>
struct Student {
    
    int roll;
    char name[20];
    float marks[3];
};
int main()
{
    struct Student s;
    
    printf("\nRoll number of Student : ");
    scanf("%d", &s.roll);

    printf("\nEnter Name : ");
    if (fgets(s.name, sizeof(s.name), stdin) != NULL)
    {
        s.name[strcspn(s.name, "\n")] = '\0';
    }

    printf("\nEnter Marks of three subjects : ");
    for(int i = 0; i < 3; i++)
    {
        scanf("%f", &s.marks[i]);
        
        if (s.marks[i] >= 100)
        {
            printf("Invalid Marks! Enter again");
            break;
        }
    }

    
    float Total = s.marks[0] + s.marks[1] + s.marks[2];
    float avg = Total / 3.0f;

    printf("\nRoll Number = %d", s.roll);
    printf("\nName = %s!", s.name);
    printf("\nTotal Marks = %.2f", Total);
    printf("\nAverage = %.2f", avg);

    return 0;

}