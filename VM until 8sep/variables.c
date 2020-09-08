#include<stdio.h>
#include<limits.h>

int main(){

	int i = 215;
	printf("the value of i is %d\n", i);
	printf("the size of the integer is %lu\n", sizeof(i));
	printf("the minimum and max value you can put in an int is %d and %d\n", INT_MIN, INT_MAX); //int min and max are included in the limits.h header
	
	short int s_i = 120;		
	printf("the value of s_i is %d\n", s_i);
	printf("the size of the short int is %lu\n", sizeof(s_i));
	printf("the minimum and max value you can put in a short int is %d and %d\n", SHRT_MIN, SHRT_MAX);
	/*
	char c = 10;
	//printf("the value of c is %d\n", c);
	printf("the size of the short int is %d\n", sizeof(c));
	printf("the minimum and max value you can put in a char is %d and %d\n", CHAR_MIN, CHAR_MAX);
	*/
	long l_i = 150;
	printf("the vlaue of the long is %lu\n", l_i);
	printf("the size of the long int is %lu\n", sizeof(l_i));
	printf("the minimum and max value you can put in a char is %ld and %ld\n", LONG_MIN, LONG_MAX);
	
	//unsigned numbers (you are able to utilize that first bit because there are no negative numbers so you get 0 to 2^32)
	unsigned int u_i = 2147483648;
	printf("the value of u_i is %u\n", u_i);
	printf("the size of unsigned it is %lu\n", sizeof(u_i));
	printf("the minimum and max value you can put in an unsigned int is %u and %u\n", 0, UINT_MAX);
	//you can do unsigned numbers for short and long as well 	

	
	
	



}	

