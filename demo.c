#include <stdio.h>

int main(){

    // int age = 24;
    // float mark = 3.5;
    // char grade = 'A';

    // printf("Age is: %d\n",age);
    // printf("Mark is: %.1f\n",mark);
    // printf("Grade is: %c\n",grade);

    const float Pi = 3.1416;

    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("%lu\n", sizeof(myInt));
    printf("%lu\n", sizeof(myFloat));
    printf("%lu\n", sizeof(myDouble));
    printf("%lu\n", sizeof(myChar));

    return 0;
}