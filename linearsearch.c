#include <stdio.h>
void main()
{ int num;
int i, keynum, found = 0;
printf("Enter the number of elements : ");
scanf("%d", &num);
int ar[num];
printf("Enter the elements one by one : \n");
for (i = 0; i < num; i++)
{
scanf("%d", &ar[i]);
}
printf("Enter the element to be searched : ");
scanf("%d", &keynum);
for (i = 0; i < num ; i++)
{
if (keynum == ar[i] )
  {
found = 1;
break;
}
}
if (found == 1)
printf("The element is present in the array at position %d",i+1);
else
printf("The element is not present in the array\n");
}
