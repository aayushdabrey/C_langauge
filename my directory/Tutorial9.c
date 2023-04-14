#include<stdio.h>
#define PI 3.14
int main(int argc, char const *argv[])
{
    int a = 8;
    const float b = 7.333;
    printf(" tab character \t\t  my backslash \a %f", PI );
    //PI = 7.33; // cannot do this since PI is a constant 
    //printf("%f", PI);
    //b = 7.22; //cannot do this since b is a constant  
    //printf("The value of a is %d\n and value of b is %f10.4f\n ", a, b);
    //printf("%-18.4f  this print\n", b);
    return 0;
}
