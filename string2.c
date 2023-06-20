//To count the number of vowels, consonants and spaces in a string.
#include <stdio.h>
#include <stdlib.h>
int main()
{
char str[100];
int i;
int vowels=0;
int consonants=0;
int space=0;
printf("Enter a string\n");
gets(str);
i=0;
while(i<=str[i])
{
if(str[i]==' ')
{
space++;
}
i++;
}
for(i=0; i<=str[i]; i++)
{
if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
{
vowels++;

}
else
{
consonants++;
}
}
printf("\n Number of Vowels in this String = %d", vowels);
printf("\n Number of Consonants in this String = %d", consonants);
printf("\n no of spaces = %d",space);
return 0;
}
