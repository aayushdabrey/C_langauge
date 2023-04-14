#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("ENTER THE NUMBER YOU WANT TO BE MULITIPLICATION TABLE OF :\n");
    scanf("%d",&num);
    for (int i = 1; i < 11; i++)
    {
        printf("%d x %d = %d\n", num, i, num*i);
    }
    
    return 0;
}
