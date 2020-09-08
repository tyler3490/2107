#include<stdio.h>

//how can we use a ternary operator to make a constant in the pre processor statement?
#define MIN(a, b) ((a <= b) ? a : b) //"if a is <= b, a = a, else a = b" 

int main(){

//if else statement

int n=5;
if(n<4){
	printf("n is less than 4\n");
}
else if (n>=4 && n<=7){
	printf("n is between 4 and 7\n");
}
else{
	printf("n is more than 7\n");
}
//switch statement 
switch(n){
//as you can see you put cases and then a default if those cases fail 
	case 4: 
		printf("n is 4\n");
		break;
	case 5:
		printf("n is 5\n");
		break;
	case 6: printf("n is 6\n");
		break;
	default:
		printf("n isnt 4, 5 or 6\n");
}

//ternary operator ( ?: )

int x = 2;

//i want to intialize y depending on the value of x
//"if (x >= 6) y=6 else y=x" 
int y = (x>=6) ? 6 : x;
printf("y = %d\n", y);

//using our ternary header
printf("the min of 5 and 20 is %d\n", MIN(5, 20));

}
