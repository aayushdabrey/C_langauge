#include<stdio.h>

int main(int argc, char const *argv[])
{
 int age , marks  ;
 printf("Enter your age\n");
 scanf("%d", &age);

 printf("Enter your marks \n");
 scanf("%d", &marks);

 switch (age)
 {
 case 3:
    printf("The age is 3\n ");
    switch (marks)
    {
    case 45:
        printf("your marks are 45");
        break;
    
    default:
    printf("your marks are not 45");
        break;
    }
    break;
    case 13:
    printf("The age is 13");
    break;
    case 23:
    printf("The age is 23");
    break;
 
 default:
 printf("Age is not 3, 13, 23");
    break;
 }
    return 0;
}
