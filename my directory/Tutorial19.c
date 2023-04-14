#include<stdio.h>
int sum(int a, int b){
    return a + b;
}
void printstar(int n){
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
    
    printf("%c",'*');
}
int main(int argc, char const *argv[])
{
    int a,b , c;
    a=9;
    b=87;
    c= sum(a, b);
    printstar(9);
    //printf("The sum is %d\n", c);
    return 0;
}
