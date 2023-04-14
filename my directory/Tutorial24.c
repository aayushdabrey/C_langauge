#include<stdio.h>

int main()
{
    char input;
    float  kmsTomiles = 0.621371 ;
    float  inchesTofoot = 0.083333;
    float cmsTOinches = 0.393701;
    float  poundTOkgs = 0.453592;
    float inchesTometer = 0.0254;
    float first , second;

    while(1){
        printf("Enter the input character q to quite\n , 1.kms to miles\n 2.inches to foot\n  3.cms to inches\n 4.pound to kgs\n 5.inches to meter\n   ");
        scanf("%c", &input);
        
        
        //printf("Enter quantity in term of first unit\n");
        //scanf("%f", &first);
        //printf("Enter quantity in term of second unit\n");
        //scanf("%f", &second);
        switch(input){
            case 'q' :
            printf("Quiting the program..");
            goto end;
            break; 

            case '1' :
            printf("Enter quantity in term of first unit\n");
            scanf("%f", &first);
            second = first * kmsTomiles;
            printf("%f kms is equal to %f miles\n",first,second);
            break; 

            case '2' :
            printf("Enter quantity in term of first unit\n");
            scanf("%f", &first);
            second = first * inchesTofoot;
            printf("%f inches is equal to %f foot\n",first,second);
            break; 

            case '3' :
            printf("Enter quantity in term of first unit\n");
            scanf("%f", &first);
            second = first * cmsTOinches;
            printf("%f cms is equal to %f inches\n",first,second);
            break; 

            case '4' :printf("Enter quantity in term of first unit\n");
            scanf("%f", &first);
            second = first * poundTOkgs;
            printf("%f pound is equal to %f kgs\n",first,second);
            break; 

            case '5' :
            printf("Enter quantity in term of first unit\n");
            scanf("%f", &first);
            second = first * inchesTometer;
            printf("%f  inches is equal to %f meters \n",first,second);
            break; 

            default:
            break;
        }
    }
  //kms to miles
  //inches to  foot
  //cms to inches
  //pound to kgs
  //inches //to meter 
  end:
    return 0;
}
