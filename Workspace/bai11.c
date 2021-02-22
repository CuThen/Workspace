#include <stdio.h>

//x = real ; y = imaginary
typedef struct{
    float x;
    float y;
} complex;

void print_com(float x,float y)
{
    if ( x == (int)x || y == (int)y )
    {
       if ( x == 0 )
        printf("\nCom: %di",(int)y);
    else if ( y == 0 )
        printf("\nCom: %d",(int)x);
    else if ( y < 0 )
        printf("\nCom: %d  %di",(int)x,(int)y);     
    else
        printf("\nCom: %d + %di",(int)x,(int)y);     
    }
    else{

    if ( x == 0 )
        printf("\nCom: %0.1fi",y);
    else if ( y == 0 )
        printf("\nCom: %0.1f",x);
    else if ( y < 0 )
        printf("\nCom: %0.1f  %0.1fi",x,y);     
    else
        printf("\nCom: %0.1f + %0.1fi",x,y);

    }

}

void addition(float x1,float y1,float x2,float y2)
{
   float x = x1 + x2;

   float y = y1 + y2;
   if ( x == (int)x || y == (int)y )
    {
       if ( x == 0 )
        printf("\naddition: %di",(int)y);
    else if ( y == 0 )
        printf("\naddition: %d",(int)x);
    else if ( y < 0 )
        printf("\naddition: %d  %di",(int)x,(int)y);     
    else
        printf("\naddition: %d + %di",(int)x,(int)y);     
    }
    else{

    if ( x == 0 )
        printf("\naddition: %0.1fi",y);
    else if ( y == 0 )
        printf("\naddition: %0.1f",x);
    else if ( y < 0 )
        printf("\naddition: %0.1f  %0.1fi",x,y);     
    else
        printf("\naddition: %0.1f + %0.1fi",x,y);

    }
}
void subtraction(float x1,float y1,float x2,float y2)
{
   float x = x1 - x2;

   float y = y1 - y2;
   if ( x == (int)x || y == (int)y )
    {
       if ( x == 0 )
        printf("\nsubtraction: %di",(int)y);
    else if ( y == 0 )
        printf("\nsubtraction: %d",(int)x);
    else if ( y < 0 )
        printf("\nsubtraction: %d  %di",(int)x,(int)y);     
    else
        printf("\nsubtraction: %d + %di",(int)x,(int)y);     
    }
    else{

    if ( x == 0 )
        printf("\nsubtraction: %0.1fi",y);
    else if ( y == 0 )
        printf("\nsubtraction: %0.1f",x);
    else if ( y < 0 )
        printf("\nsubtraction: %0.1f  %0.1fi",x,y);     
    else
        printf("\nsubtraction: %0.1f + %0.1fi",x,y);

    }
}
void multiplication(float x1,float y1,float x2,float y2)
{
   float x = x1*x2 - y1*y2;

   float y = x1*y2 + y1*x2;
   if ( x == (int)x || y == (int)y )
    {
       if ( x == 0 )
        printf("\nmultiplication: %di",(int)y);
    else if ( y == 0 )
        printf("\nmultiplication: %d",(int)x);
    else if ( y < 0 )
        printf("\nmultiplication: %d  %di",(int)x,(int)y);     
    else
        printf("\nmultiplication: %d + %di",(int)x,(int)y);     
    }
    else{

    if ( x == 0 )
        printf("\nmultiplication: %0.1fi",y);
    else if ( y == 0 )
        printf("\nmultiplication: %0.1f",x);
    else if ( y < 0 )
        printf("\nmultiplication: %0.1f  %0.1fi",x,y);     
    else
        printf("\nmultiplication: %0.1f + %0.1fi",x,y);

    }
}

int main()
{
    complex com1,com2;
    printf("Com1: a + bi.");
    printf("\na = ");
    scanf("%f",&com1.x);
    printf("b = ");
    scanf("%f",&com1.y);

    print_com(com1.x,com1.y);  // print com1

    printf("\nCom2: a + bi.");
    printf("\na = ");
    scanf("%f",&com2.x);
    printf("b = ");
    scanf("%f",&com2.y);
    
    print_com(com2.x,com2.y);  // print com2

    addition(com1.x,com1.y,com2.x,com2.y);
    subtraction(com1.x,com1.y,com2.x,com2.y);
    multiplication(com1.x,com1.y,com2.x,com2.y);
    
    return 0;
}