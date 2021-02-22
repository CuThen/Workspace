#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    double delta,n1,n2;
    printf("Phuong trinh bac 2 co dang : a*x^2+b*x+c=0 ");
    do
    {
        printf("\nNhap vao tri a (a # 0) :");
        scanf("%d",&a);
    } while ( a == 0);
    printf("\nNhap vao tri b :");
    scanf("%d",&b);
    printf("\nNhap vao tri c :");
    scanf("%d",&c);
    if ( b == 0 && c == 0)
    {
        printf("\nPhuong trinh vo nghiem");
    }
    else
    {
        delta = b*b - 4*a*c;
    if (delta < 0)
    {
        printf("\nPhuong trinh vo nghiem");
    }
    else if (delta == 0)
    {
        printf("\nPhuong trinh co nghiem duy nhat: %2.1f",b/(2*a));
    }
    else if (delta > 0)
    {
        n1=(-b+sqrt(delta))/(2*a);
        n2=(-b-sqrt(delta))/(2*a);
        printf("\nPhuong trinh co 2 nghiem phan biet n1 = %2.1f va n2 %2.1f",n1,n2);
    }
    }
    
    
    

    return 0;
}