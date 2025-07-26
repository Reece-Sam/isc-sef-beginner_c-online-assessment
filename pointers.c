#include <stdio.h>

int main() 
{
   int num = 42;
   int *ptr = &num;
  
   printf("Value of num: %d\n", num);
   printf("Address of num: %p\n", &num);
   printf("Pointer ptr points to: %p\n", ptr);        
   printf("Value at ptr: %d\n", *ptr);

return 0;


}

