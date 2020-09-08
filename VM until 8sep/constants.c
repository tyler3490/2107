#include<stdio.h>

//so far we know how to define a constant like this 
#define PI 3.1415 //symbolic constant

//can also do this using the constant keyword
const int NUM_STUDENTS = 30;

//what if you want to define an array of constants?
//enum day {sun=1, mon=2, tues=3, wed=4, thurs=5, fri=6, sat=7};

//if you dont inititalize anything the first value is 0 but if you just set sun to 1 all the others will set themselves in order 
enum day {sun=1, mon, tues, wed, thurs, fri, sat};

//
//enum year {jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec};

//you can also initialize in the middle 
enum year {jan=1, feb, mar, apr, may, jun, jul, aug=25, sep, oct, nov, dec};


int main(){
	//you can also define it in main
	const int NUM_STUDENTS = 30;
	
	printf("PI = %f\n", PI);
	printf("number of students = %d\n", NUM_STUDENTS);
	
	int i;
	for(i=sun; i<=sat; i++){
		printf("%d", i);
		
	}
	printf("\n");
	
	for(i=jan; i<=dec; i++){
		printf("%d", i);
		printf("\n");
	}
}
