#include <stdio.h>
#include <math.h>

int main()
{
  double princpal = 0.0;
  double rate = 0.0;
  int years = 0;
  int timesCompounded = 0;
  double total = 0.0;
  
  printf("Compound Interest Calculator\n");
  
  printf("Enter the princpal (P): ");
  scanf("%lf", &princpal);

  printf("Enter the interest rate (r): ");
  scanf("%lf", &rate);
  rate = rate / 100;

  printf("Enter the no. of years (t): ");
  scanf("%d", &years);

  printf("Enter no. of times compounded per year (n): ");
  scanf("%d", &timesCompounded);

  total = princpal * pow(1 + rate / timesCompounded, timesCompounded * years);

  printf("After %d years, the total will be $%.2lf\n", years, total);
 
  return 0;
}
