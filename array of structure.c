#include<stdio.h>

struct person
{
    int age;
    float salary;
};



int main()
{
    struct person person[3];
    int i;

    for (i=0;i<3;i++)
    {
        printf("\nEnter information for person %d: \n",i+1);
        printf("\nEnter Age: ");
        scanf("%d",&person[i].age);
        printf("Enter Salary: ");
        scanf("%f",&person[i].salary);
    }

    for (i=0;i<3;i++)
    {

    printf("\n\nFor Person %d: \n",i+1);
    printf("Age: %d\n",person[i].age);
    printf("Salary: %.2lf\n",person[i].salary);

    }

    getch();
}

