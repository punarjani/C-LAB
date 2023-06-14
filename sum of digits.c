#include<stdio.h>
int main()
{
	 int number, sum, step=1, rem;
	 printf("Enter number: ");
	 scanf("%d", &number);
	 
	 do
	 {
		  sum = 0;
		  while(number!=0)
		  {
			   rem = number % 10;
			   sum = sum + rem;
			   number = number / 10;
		  }
		  
		  printf("Step-%d Sum = %d\n", step, sum);
		  number = sum;
		  step = step + 1;
		  
	 }while(number>9);
	 
	 return 0;
}
