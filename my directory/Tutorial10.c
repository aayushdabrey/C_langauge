#include<stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Enter your age\n ");

    scanf("%d",&age);
    printf("You have enter %d as your age \n", age);
    if (age>=18)
    {
        printf("You can vote!");
    }
    else if (age>10){
        printf("You are brtween 10 to 18 and you can vote for kids");
    }
    else
    {
        printf("You cannot vote!");
    }
    
    

    return 0;
}
