#include<stdio.h>

int main()
{
    int age;
    double weight;
    char name[20];
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your weight: ");
    scanf("%lf", &weight);
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Your age is %d, your weight is %lf and your name is %s", age, weight, name);
    printf("Enter your age, weight and name: ");
    scanf("%d %lf %s", &age, &weight, &name);
    printf("\nYour age is %d, your weight is %lf and your name is %s", age, weight, name);
    return 0;
}