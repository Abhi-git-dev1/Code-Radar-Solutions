#include <stdio.h>

int main() {
   int a, b, c;

   // Taking input from the user
   scanf("%d %d", &a, &b);

   // Performing Bitwise AND operation
   c = a & b;

   // Printing the result
   printf("%d", c);

   return 0;
}
