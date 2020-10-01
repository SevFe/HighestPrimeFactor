#include <stdio.h>
#include <math.h>

int primeFactor(int x);

int main(void) 
{
  int numberGiven;

  printf("Input a number: ");
  scanf("%d", &numberGiven);

  primeFactor(numberGiven);
}

int primeFactor(int x)
{
  int numberHolder[1];

  if (x <= 1)
  {
    printf("Not valid\n");
    return 1;
  }

  while (x % 2 == 0)
  {
    numberHolder[0] = 2;
    x = x/2;
  }

  for (int i = 3; i <= x; i += 2)
  {
    while (x % i == 0)
    {
      numberHolder[0] = i;
      x = x/i; 
    }
  }

  printf("The highest prime factor is: %d\n", numberHolder[0]);
  return 0;
}
