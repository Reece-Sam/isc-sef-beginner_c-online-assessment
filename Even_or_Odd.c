#include <stdio.h> //Preprocessor directive
//The entry point 
int main() //Main function
{          
    int num;
   printf("Enter an integer: ");
   scanf("%d", &num); 
//The conditional statment
   
   if (num % 2 == 0) 
       printf("%d is even.\n",num);
   else
       printf("%d is odd.\n" ,num);
//The output
   return 0; 
}	

