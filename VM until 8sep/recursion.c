#include<stdio.h>
int Factorial(int);
int Factorial_no_recur(int);
int fib(int);

int main(){

int i = 6;

int F = Factorial(i);
printf("the factorial of %d is %d\n", i, F);

int F1 = Factorial_no_recur(i);
printf("the factorial of %d with no recur is %d\n", i, F1);

for (i=1; i<=10; i++){
	printf("%4d", fib(i));
	printf("\n");	
} 



}

int Factorial_no_recur(int n){
	int fact = 1;
	//while (n>=0){
		//fact= fact*n;
		//n--;
		//how can we write this in a single line?	
	//}
	while(n>0)
		fact = fact*n--; //fact = fact*n; n--
		
return fact;

}


int Factorial(int n){

	if(n==0)
		return 1; //base case

	return n*Factorial(n-1); //general case
}

/*
suppose we want to calculate a factorial

5! = 5*4*3*2*1
   = 5, fact(4)
   = 5, 4, fact(3)
   = etc etc 
   = 5, 4, 3, 2, 1, fact(0)
fact(0) is the base case    
  so you can see that we are calling fact() over and over again 

*/

int fib(int n){
	if (n<=2)
		return 1; //base
	
return fib(n-1) + fib(n-2);
	
}






