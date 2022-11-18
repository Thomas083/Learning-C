#include<stdio.h>

int main()
{
    // Declare the variables
    int age;
    double weight;
    char name[20];
    // Get the user input
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your weight: ");
    scanf("%lf", &weight);
    printf("Enter your name: ");
    scanf("%s", name);
    // Print the user input
    printf("Your age is %d, your weight is %lf and your name is %s", age, weight, name);
    // Get the user inputs
    printf("Enter your age, weight and name: ");
    scanf("%d %lf %s", &age, &weight, &name);
    // Print the user inputs
    printf("\nYour age is %d, your weight is %lf and your name is %s", age, weight, name);
    return 0;
}