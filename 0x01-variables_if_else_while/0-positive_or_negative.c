#include <stdlib.h>
#include <time.h>
include <stdio.h>
[A[A
#include <stdio.h>
/**
*main - print if the number is postive,zero or negative
*
*Description: using the main function
* this program prints programming is positive, zero or negative
*return :0
*/
int main (void)
{
int n;

srand (time(0));
n= rand()-RAND_MAX/2;
  
if (n>0)
{
   printf("%i is posititve\n", n);
}
else if (n==0)
{
   printf("%i is zero\n", n);
}
else if (n<0)
{
   printf("%i is negative\n", n);
}
return (0);
}
