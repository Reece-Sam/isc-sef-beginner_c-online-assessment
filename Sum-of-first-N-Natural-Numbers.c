#include <stdio.h>
//The input
int main()
//The process	
{ int n;
  int sum = 0;
  printf("enter a positive integer: ");
  scanf("%d", &n);

//Using of the formular for more understanding
  sum = n * (n + 1) / 2;

  printf("Sum of first %d natural numbers is %d\n", n, sum);
  
 return 0; 

}
