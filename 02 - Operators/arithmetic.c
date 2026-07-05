#include <stdio.h>

int main() {

  int a = 17, b = 5;

  printf("Addition: %d + %d = %d\n", a, b, a + b);
  printf("Subtraction: %d - %d = %d\n", a, b, a - b);
  printf("Multiplication: %d * %d = %d\n", a, b, a * b);
  printf("Division: %d / %d = %d\n", a, b, a / b);                       // integer division truncates the decimal part
  printf("Division (float): %d / %d = %.2f\n", a, b, (float)a / b);      // proper decimal result
  printf("Modulus: %d %% %d = %d\n", a, b, a % b);                       // gives the remainder of division

  // increment and decrement
  int c = 10;
  printf("\nBefore increment: %d\n", c);
  c++;
  printf("After increment (c++): %d\n", c);
  c--;
  c--;
  printf("After two decrements (c--): %d\n", c);

  // compound assignment operators
  int d = 10;
  d += 5;   // same as d = d + 5
  printf("\nd += 5 -> %d\n", d);
  d -= 3;   // same as d = d - 3
  printf("d -= 3 -> %d\n", d);
  d *= 2;   // same as d = d * 2
  printf("d *= 2 -> %d\n", d);
  d /= 4;   // same as d = d / 4
  printf("d /= 4 -> %d\n", d);
  d %= 3;   // same as d = d %% 3
  printf("d %%= 3 -> %d\n", d);

  return 0;
}
