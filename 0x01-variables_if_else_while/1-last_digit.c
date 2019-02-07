#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
int main(void)
{
int n;
int lastNumber;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastNumber = n % 10;
  /* your code goes there */
printf("Last digit of %d is %d and is ", n, lastNumber);
if (lastNumber > 5)
{
printf("greater than 5\n");
}
else if (lastNumber == 0)
{
printf("0\n");
}
else if (lastNumber < 6)
{
printf("less than 6 and not 0\n");
}
return (0);
}
