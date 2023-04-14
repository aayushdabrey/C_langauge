#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i, age ;
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n Enter your age\n", i);
        scanf("%d", &age);
        //if (age>10)
       // {
      //      break;
       // }
       if (age>10)
       {
        continue;
       }
       printf("Aayush is a good boy");
       printf("east or west india is a best");
       
        
    }
    
    return 0;
}
