#include <stdio.h>

void calculate_sum(int n);
void calculate_multiplication(int n);
int subtract(int b, int c);
int divide_floats(int b, int c);	

int main() {  

	calculate_sum(6);
	calculate_multiplication(4);

	int b,c,option;
	printf("pick an option from the list below\n");
	printf("1. Subtract two numbers\n");
	printf("2. Divide_floats two numbers\n");
	scanf("%d",&option);

	if  (option > 0 && option <= 2) {

		printf("Enter the two numbers: ");
		scanf("%d""%d", &b,&c);
		//(option)
		if (option == 1){
			subtract(b,c);}
		else {
			divide_floats(b,c);
		}
	}  

	else{
		printf("Please enter a valid option\n"); }
	return 0;

}
void calculate_sum(int n){
 int sum = n * (n+1)/2;
 printf("int sum of all numbers till %d is %d\n", n, sum); 
}

void calculate_multiplication(int n){
	int multiplication = n + (n*1)/2; 
	printf("int multiplication of all numbers till %d is %d\n", n, multiplication);
}
int subtract (int b, int c) {
	printf("The difference of %d and %d is:%d\n",b,c, b-c );
	return b-c;
} 	


int divide_floats (int b, int c) {
	printf("The division of %d and %d is:%d\n",b,c , b/c );
	return b/c;
}  






