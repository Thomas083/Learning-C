#include <stdio.h>

int main() {
    int age = 10;
    printf("age = %d", age);
    double number = 12.32;
    printf("\nnumber = %.2lf", number);
    float floatNumber = 10.9f;
    printf("\nfloatNumber = %f", floatNumber);
    char text = 'i';
    printf("\ntext = %c but it can be %d too", text, text); 
    return 0;
}