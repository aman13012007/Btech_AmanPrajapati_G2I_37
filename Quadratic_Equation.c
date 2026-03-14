#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, D, r1, r2, img_part;
    int condition;
    printf("Enter values of a,b,c : ");
    scanf("%f%f%f", &a, &b, &c);
    D = (b * b) - (4 * a * c);
    printf("Discriminant = %f",D);
    if(D>0)
         condition = 1;
    else if(D==0)
         condition = 0;
    else
         condition = -1;      
    switch (condition)       
    {
    case 1:
        r1 = (-b + sqrt(D)) / (2 * a);
        r2 = (-b - sqrt(D)) / (2 * a);
        printf("Distinct or real roots are root1 = %.2f \n root2 = %.2f", r1, r2);
        break;

    case 0:
        r1=r2=-b/(2*a);
        printf("Equal roots are \n");
        printf("Root1=%f\nRoot2=%f\n",r1,r2);
        break;
    case -1:
    r1=r2=-b/(2*a);
    img_part = sqrt(-D)/(2*a);

    printf("Imaginary roots are \n");
    printf("Root1 = %2f + %2f\n",r1,img_part);
    printf("Root2 = %2f - %2f\n",r2,img_part);
   
    break;
    }
    return 0;
}