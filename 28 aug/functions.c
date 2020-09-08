#include<stdio.h>
#define PI 3.14


//you need this to let the compiler know that the function is coming up of course you could just declare the function first 
void printStuff(void); 
double areaOfCircle(double);
double vol(double, double);
int pwr_func(int, int);

int global = 100; //global var

int main(){

	printStuff();	
	double area = areaOfCircle(5.0);
	printf("the area of the circle is %f\n", area);
	
	double volume = vol(5.0, 10);
	printf("the volume of a cylinder is %f\n", volume);
	
	int power = pwr_func(2, 10);
	printf("the power of 2 and 10 is  %d\n", power);


};

void printStuff(void){

	printf("this function is printing!\n");

}


double areaOfCircle(double radius){

	return PI*radius*radius;

}

double vol(double radius, double height){

	return PI*radius*radius*height;

} 


int pwr_func(int base, int exponent){

	int power_val = 1; //local var
	int i;
	for(i=0; i<exponent; i++){
		
		power_val = power_val*base;
	
	} 
	return power_val;

}
