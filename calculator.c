#include <stdio.h>
//Declaration of functions
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

//Main funtion
int main() {

	int a,b,option;
	printf("pick an option from the list below\n");
	printf("1. Add two numbers\n");
	printf("2. Substract two numbers\n");
	printf("3. Multiply two numbers\n");
	printf("4. Divide two numbers\n");
	scanf("%d",&option);


if (option > 0 && option <= 4) {

        printf("Enter the two numbers: ");
        scanf("%d""%d", &a,&b);
// (option)
	  if (option == 1){ 
                   add(a,b);}
	  else if ( option == 2) {
		    subtract(a,b);}
	  else if (option == 3){
		      multiply(a,b);}
          else {
	  		divide(a, b);
	   }
}

           else{
	     printf("Please enter a valid option\n"); }
	return 0;
}


int add (int a, int b) { 
	printf("The sum of %d and %d is:%d\n",a,b, a+b); 
	return a+b;
}
int subtract (int a, int b) {
	printf("The difference of %d and %d is:%d\n",a,b, a-b );
	return a-b;
} 
int multiply (int a, int b) {
	printf("The multiplication of %d and %d is:%d\n",a,b ,a*b);
	return a*b;
} 
int divide (int a, int b) {
	printf("The division of %d and %d is:%d\n" ,a,b ,a/b);
	return a/b;
  }   
//End of main funtions  
