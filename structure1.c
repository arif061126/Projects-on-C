#include<stdio.h>

struct person
{
    int age;
    float salary;
};



int main()
{
    struct person person1,person2,person3;
    person1.age=10;
    person1.salary=100.25;

    person2.age=20;
    person2.salary=200.26;

    person3.age=30;
    person3.salary=300.58;

    printf("Person1: \n");
    printf("Age: %d\n",person1.age);
    printf("Salary: %.1lf\n",person1.salary);

    printf("Person2: \n");
    printf("Age: %d\n",person2.age);
    printf("Salary: %.1lf\n",person2.salary);

    printf("Person3: \n");
    printf("Age: %d\n",person3.age);
    printf("Salary: %.1lf\n",person3.salary);

    getch();
}
