#include <stdio.h>
void main()
{
int ar[100], n, i, sum = 0;
printf("Numbers elements to be entered : ");
scanf("%d", &n);
for (i = 0; i < n; i++)
{
printf("Enter element %d : ", i + 1);
scanf("%d", &ar[i]);
sum += ar[i];
}
