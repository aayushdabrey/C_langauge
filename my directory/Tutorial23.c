#include<stdio.h>

int main(int argc, char const *argv[])
{
    //int marks[4]; 
    int marks[2][4] = {{45,232,3,2}, 
                       {3,9,45,2}};
    //for (int i = 0; i < 4; i++)
    //{
     //   printf("Enter the value of %d element of the array \n", i);
       // scanf("%d", &marks[i]);
   // }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            /* code */
        
        
       // printf("The value of %d , %d element of the array is %d\n", i , j, marks[i][j]);
       printf("%d ", marks[i][j]);
        }
        printf("\n");
    }
    
    
   // marks[0] = 34;
   // printf("marks of student 1 is %d\n", marks[0]);
   // marks[0] = 454;
   // printf("marks of student 1 is %d\n", marks[0]);
    return 0;
}
