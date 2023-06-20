#include <stdio.h>
void main()
{
float a,b,c;
printf("Enter three different numbers");
scanf("%f%f%f",&a,&b,&c);
if(a>b && a>c)
printf("%f is the largest no:",a);
if(b>a && b>c)
printf("%f is the largest no:",b);
else
printf("%f is the largest no:",c);


}
